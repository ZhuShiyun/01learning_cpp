// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: addressbook.proto

#ifndef PROTOBUF_addressbook_2eproto__INCLUDED
#define PROTOBUF_addressbook_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_addressbook_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsAccountImpl();
void InitDefaultsAccount();
void InitDefaultsUserImpl();
void InitDefaultsUser();
inline void InitDefaults() {
  InitDefaultsAccount();
  InitDefaultsUser();
}
}  // namespace protobuf_addressbook_2eproto
namespace IM {
class Account;
class AccountDefaultTypeInternal;
extern AccountDefaultTypeInternal _Account_default_instance_;
class User;
class UserDefaultTypeInternal;
extern UserDefaultTypeInternal _User_default_instance_;
}  // namespace IM
namespace IM {

// ===================================================================

class Account : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:IM.Account) */ {
 public:
  Account();
  virtual ~Account();

  Account(const Account& from);

  inline Account& operator=(const Account& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Account(Account&& from) noexcept
    : Account() {
    *this = ::std::move(from);
  }

  inline Account& operator=(Account&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Account& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Account* internal_default_instance() {
    return reinterpret_cast<const Account*>(
               &_Account_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Account* other);
  friend void swap(Account& a, Account& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Account* New() const PROTOBUF_FINAL { return New(NULL); }

  Account* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Account& from);
  void MergeFrom(const Account& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Account* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string password = 3;
  void clear_password();
  static const int kPasswordFieldNumber = 3;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  #if LANG_CXX11
  void set_password(::std::string&& value);
  #endif
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // uint64 ID = 1;
  void clear_id();
  static const int kIDFieldNumber = 1;
  ::google::protobuf::uint64 id() const;
  void set_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:IM.Account)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  ::google::protobuf::uint64 id_;
  mutable int _cached_size_;
  friend struct ::protobuf_addressbook_2eproto::TableStruct;
  friend void ::protobuf_addressbook_2eproto::InitDefaultsAccountImpl();
};
// -------------------------------------------------------------------

class User : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:IM.User) */ {
 public:
  User();
  virtual ~User();

  User(const User& from);

  inline User& operator=(const User& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  User(User&& from) noexcept
    : User() {
    *this = ::std::move(from);
  }

  inline User& operator=(User&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const User& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const User* internal_default_instance() {
    return reinterpret_cast<const User*>(
               &_User_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(User* other);
  friend void swap(User& a, User& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline User* New() const PROTOBUF_FINAL { return New(NULL); }

  User* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const User& from);
  void MergeFrom(const User& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(User* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .IM.Account user = 1;
  bool has_user() const;
  void clear_user();
  static const int kUserFieldNumber = 1;
  const ::IM::Account& user() const;
  ::IM::Account* release_user();
  ::IM::Account* mutable_user();
  void set_allocated_user(::IM::Account* user);

  // @@protoc_insertion_point(class_scope:IM.User)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::IM::Account* user_;
  mutable int _cached_size_;
  friend struct ::protobuf_addressbook_2eproto::TableStruct;
  friend void ::protobuf_addressbook_2eproto::InitDefaultsUserImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Account

// uint64 ID = 1;
inline void Account::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Account::id() const {
  // @@protoc_insertion_point(field_get:IM.Account.ID)
  return id_;
}
inline void Account::set_id(::google::protobuf::uint64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:IM.Account.ID)
}

// string name = 2;
inline void Account::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Account::name() const {
  // @@protoc_insertion_point(field_get:IM.Account.name)
  return name_.GetNoArena();
}
inline void Account::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:IM.Account.name)
}
#if LANG_CXX11
inline void Account::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:IM.Account.name)
}
#endif
inline void Account::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:IM.Account.name)
}
inline void Account::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:IM.Account.name)
}
inline ::std::string* Account::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:IM.Account.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Account::release_name() {
  // @@protoc_insertion_point(field_release:IM.Account.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Account::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:IM.Account.name)
}

// string password = 3;
inline void Account::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Account::password() const {
  // @@protoc_insertion_point(field_get:IM.Account.password)
  return password_.GetNoArena();
}
inline void Account::set_password(const ::std::string& value) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:IM.Account.password)
}
#if LANG_CXX11
inline void Account::set_password(::std::string&& value) {
  
  password_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:IM.Account.password)
}
#endif
inline void Account::set_password(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:IM.Account.password)
}
inline void Account::set_password(const char* value, size_t size) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:IM.Account.password)
}
inline ::std::string* Account::mutable_password() {
  
  // @@protoc_insertion_point(field_mutable:IM.Account.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Account::release_password() {
  // @@protoc_insertion_point(field_release:IM.Account.password)
  
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Account::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    
  } else {
    
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:IM.Account.password)
}

// -------------------------------------------------------------------

// User

// .IM.Account user = 1;
inline bool User::has_user() const {
  return this != internal_default_instance() && user_ != NULL;
}
inline void User::clear_user() {
  if (GetArenaNoVirtual() == NULL && user_ != NULL) {
    delete user_;
  }
  user_ = NULL;
}
inline const ::IM::Account& User::user() const {
  const ::IM::Account* p = user_;
  // @@protoc_insertion_point(field_get:IM.User.user)
  return p != NULL ? *p : *reinterpret_cast<const ::IM::Account*>(
      &::IM::_Account_default_instance_);
}
inline ::IM::Account* User::release_user() {
  // @@protoc_insertion_point(field_release:IM.User.user)
  
  ::IM::Account* temp = user_;
  user_ = NULL;
  return temp;
}
inline ::IM::Account* User::mutable_user() {
  
  if (user_ == NULL) {
    user_ = new ::IM::Account;
  }
  // @@protoc_insertion_point(field_mutable:IM.User.user)
  return user_;
}
inline void User::set_allocated_user(::IM::Account* user) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete user_;
  }
  if (user) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      user = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, user, submessage_arena);
    }
    
  } else {
    
  }
  user_ = user;
  // @@protoc_insertion_point(field_set_allocated:IM.User.user)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace IM

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_addressbook_2eproto__INCLUDED