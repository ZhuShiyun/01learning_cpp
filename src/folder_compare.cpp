/**
  ******************************************************************************
  * @file           : folder_compare.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : 原文链接：https://blog.csdn.net/wswms/article/details/4526484
  * @date           : 23-10-25
  ******************************************************************************
  */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <cstring>
#include <set>

typedef std::vector<std::string> paths;

bool IsDirectory(const char* path)
{
	DIR* dir = opendir(path);
	if (dir)
	{
		closedir(dir);
		return true;
	}
	return false;
}

void GetFiles(const char* path, const char* rootFolder, paths& files, bool includeSubDir = true)
{
	DIR* dir = opendir(path);
	if (!dir)
		return;

	struct dirent* entry;
	while ((entry = readdir(dir)) != NULL)
	{
		std::string name = entry->d_name;
		if (name == "." || name == "..")
			continue;

		std::string fullPath = std::string(path) + "/" + name;
		if (IsDirectory(fullPath.c_str()) && includeSubDir)
		{
			GetFiles(fullPath.c_str(), rootFolder, files, includeSubDir);
		}
		else
		{
			files.push_back(fullPath.substr(strlen(rootFolder) + 1));
		}
	}
	closedir(dir);
}

void DumpPaths(const char* title, const paths& _paths)
{
#ifdef _DEBUG
	std::cout << title << ":" << std::endl;
    for (const auto& path : _paths)
    {
        std::cout << path << std::endl;
    }
#endif
}

bool FolderCompare(const char* folderA, const char* folderB, paths& newFiles, paths& missedFiles)
{
	paths filesInA;
	GetFiles(folderA, folderA, filesInA);
	DumpPaths(folderA, filesInA);

	paths filesInB;
	GetFiles(folderB, folderB, filesInB);
	DumpPaths(folderB, filesInB);

	std::set<std::string> setFilesInA(filesInA.begin(), filesInA.end());
	std::set<std::string> setFilesInB(filesInB.begin(), filesInB.end());

	// Find new files
	for (const auto& file : setFilesInB)
	{
		if (setFilesInA.find(file) == setFilesInA.end()) // Not found in A => A new one
		{
			newFiles.push_back(file);
		}
	}

	// Find missed files
	for (const auto& file : setFilesInA)
	{
		if (setFilesInB.find(file) == setFilesInB.end()) // Not found in B => this one is missed
		{
			missedFiles.push_back(file);
		}
	}

	return true;
}

int main(int argc, char* argv[])
{
	paths newFiles, missedFiles;
	if (argc == 3)
	{
		FolderCompare(argv[1], argv[2], newFiles, missedFiles);
	}
	else
		FolderCompare("/home/b-zhushiyun/test01", "/home/b-zhushiyun/test02", newFiles, missedFiles);

	DumpPaths("New files", newFiles);
	DumpPaths("Missed files", missedFiles);

	char achar;
	std::cin.get(achar);
	return 0;
}

//#include "stdafx.h"
//#include <Shlwapi.h>
//#include <Windows.h>
//#include <algorithm>
//#include <io.h>
//#include <iostream>
//#include <string>
//#include <tchar.h>
//#include <vector>
//using namespace std;
//
//typedef std::vector<string> paths;
//bool IsDirectory(LPCTSTR pszPath)
//{
//	return PathIsDirectory(pszPath);
//}
//
//void GetFiles(const TCHAR* sPath, const TCHAR* sRootFolder, paths& files, bool bIncudeSubDir = true)
//{
//	struct _finddata_t c_file;
//	long hFile;
//	string sCD = sPath;
//	sCD += _T("//*");
//	if ((hFile = (long)_findfirst(sCD.c_str(), &c_file)) == -1L)
//		return;
//	else
//	{
//		do
//		{
//			string sFullPath = sPath;
//			sFullPath += _T("//");
//			sFullPath += c_file.name;
//			if (_tcscmp(c_file.name, ".") == 0 || _tcscmp(c_file.name, "..") == 0)
//				continue;
//			else if (IsDirectory(sFullPath.c_str()) && bIncudeSubDir)
//			{
//				GetFiles(sFullPath.c_str(), sRootFolder, files, bIncudeSubDir);
//			}
//			else
//			{
//				char szOut[MAX_PATH] = "";
//				PathRelativePathTo(szOut,
//					sRootFolder,
//					FILE_ATTRIBUTE_DIRECTORY,
//					sFullPath.c_str(),
//					FILE_ATTRIBUTE_NORMAL);
//				files.push_back(szOut);
//			}
//		} while (_findnext(hFile, &c_file) == 0);
//		_findclose(hFile);
//	}
//	return;
//}
//
//void DumpPaths(const TCHAR* pTitle, const paths _paths)
//{
//#ifdef _DEBUG
//	std::cout << pTitle << _T(":") << std::endl;
//    for (paths::const_iterator it = _paths.begin(); it != _paths.end(); ++it)
//    {
//        std::cout << *it << std::endl;
//    }
//#endif
//}
//
//bool FolderCompare(const TCHAR* folderA, const TCHAR* folderB, paths& newFiles, paths& missedFiles)
//{
//	paths filesInA;
//	GetFiles(folderA, folderA, filesInA);
//	DumpPaths(folderA, filesInA);
//
//	paths filesInB;
//	GetFiles(folderB, folderB, filesInB);
//	DumpPaths(folderB, filesInB);
//
//	// find out the new files
//	for (paths::const_iterator itB = filesInB.begin(); itB != filesInB.end(); ++itB)
//	{
//		if (std::find(filesInA.begin(), filesInA.end(), *itB) == filesInA.end()) // Not found => A new one
//		{
//			newFiles.push_back(*itB);
//		}
//	}
//
//	// find out the missed files
//	for (paths::const_iterator itA = filesInA.begin(); itA != filesInA.end(); ++itA)
//	{
//		if (std::find(filesInB.begin(), filesInB.end(), *itA) == filesInB.end()) // Not found => this one is missed
//		{
//			missedFiles.push_back(*itA);
//		}
//	}
//
//	return true;
//}
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	paths newFiles, missedFiles;
//	if (argc == 3)
//	{
//		FolderCompare(argv[1], argv[2], newFiles, missedFiles);
//	}
//	else
//		FolderCompare(_T("C://Jalen"), _T("C://Jalen - Copy"), newFiles, missedFiles);
//
//	DumpPaths(_T("New files"), newFiles);
//	DumpPaths(_T("Missed files"), missedFiles);
//
//	char achar;
//	std::cin.get(achar);
//	return 0;
//}


