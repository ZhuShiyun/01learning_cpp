/**
  ******************************************************************************
  * @file           : depth.cpp
  * @author         : b-zhushiyun
  * @brief          : 测量湖泊水深
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */
#include <iostream>
using namespace std;
#define NUM_OF_X_GRIDS 9
#define NUM_OF_Y_GRIDS 4
static const double
        lake_region_depths[NUM_OF_Y_GRIDS][NUM_OF_X_GRIDS] =
        {
                { 0.0, 0.0, 1.0, 2.0, 2.0, 3.0, 0.0, 0.0, 0.0 },
                { 0.0, 2.0, 3.0, 5.0, 5.0, 3.0, 2.0, 0.0, 0.0 },
                { 0.0, 1.0, 4.0, 3.0, 4.0, 2.0, 2.0, 1.0, 0.0 },
                { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0 }
        };
const double lake_grid_width = 5.0;

int main()
{
    double num_of_lake_grids = 0.0, lake_area = 0.0;
    double total_lake_depth = 0.0, mean_lake_depth = 0.0;
    unsigned int i, j;
    for( i = 0; i < NUM_OF_Y_GRIDS; i++ ){
        for( j = 0; j < NUM_OF_X_GRIDS; j++ ){
            if( lake_region_depths[i][j] > 0 ){
                num_of_lake_grids += 1.0;
                total_lake_depth += lake_region_depths[i][j];
            }
        }
    }
    lake_area = lake_grid_width * lake_grid_width * num_of_lake_grids;
    mean_lake_depth = total_lake_depth / num_of_lake_grids;
    cout << "Area of the lake is " << lake_area << "(m2)" << endl;
    cout << "Mean depth of the lake is " << mean_lake_depth << "(m)" << endl;
    return 0;
}