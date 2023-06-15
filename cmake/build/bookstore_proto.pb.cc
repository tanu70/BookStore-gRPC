// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bookstore_proto.proto

#include "bookstore_proto.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace store {
template <typename>
PROTOBUF_CONSTEXPR GetReq::GetReq(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.book_id_)*/ 0

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GetReqDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetReqDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetReqDefaultTypeInternal() {}
  union {
    GetReq _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetReqDefaultTypeInternal _GetReq_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR BookInfo::BookInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.book_title_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.author_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.book_id_)*/ 0

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct BookInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BookInfoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~BookInfoDefaultTypeInternal() {}
  union {
    BookInfo _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BookInfoDefaultTypeInternal _BookInfo_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR BookList::BookList(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.booklist_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct BookListDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BookListDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~BookListDefaultTypeInternal() {}
  union {
    BookList _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BookListDefaultTypeInternal _BookList_default_instance_;
}  // namespace store
static ::_pb::Metadata file_level_metadata_bookstore_5fproto_2eproto[3];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_bookstore_5fproto_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_bookstore_5fproto_2eproto = nullptr;
const ::uint32_t TableStruct_bookstore_5fproto_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::store::GetReq, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::store::GetReq, _impl_.book_id_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::store::BookInfo, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::store::BookInfo, _impl_.book_id_),
    PROTOBUF_FIELD_OFFSET(::store::BookInfo, _impl_.book_title_),
    PROTOBUF_FIELD_OFFSET(::store::BookInfo, _impl_.author_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::store::BookList, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::store::BookList, _impl_.booklist_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::store::GetReq)},
        { 9, -1, -1, sizeof(::store::BookInfo)},
        { 20, -1, -1, sizeof(::store::BookList)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::store::_GetReq_default_instance_._instance,
    &::store::_BookInfo_default_instance_._instance,
    &::store::_BookList_default_instance_._instance,
};
const char descriptor_table_protodef_bookstore_5fproto_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\025bookstore_proto.proto\022\005store\"\031\n\006GetReq"
    "\022\017\n\007book_id\030\001 \001(\005\"\?\n\010BookInfo\022\017\n\007book_id"
    "\030\001 \001(\005\022\022\n\nbook_title\030\002 \001(\t\022\016\n\006author\030\003 \001"
    "(\t\"-\n\010BookList\022!\n\010bookList\030\001 \003(\0132\017.store"
    ".BookInfo2\?\n\tBookStore\0222\n\016GetBookRequest"
    "\022\r.store.GetReq\032\017.store.BookList\"\000b\006prot"
    "o3"
};
static ::absl::once_flag descriptor_table_bookstore_5fproto_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_bookstore_5fproto_2eproto = {
    false,
    false,
    242,
    descriptor_table_protodef_bookstore_5fproto_2eproto,
    "bookstore_proto.proto",
    &descriptor_table_bookstore_5fproto_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_bookstore_5fproto_2eproto::offsets,
    file_level_metadata_bookstore_5fproto_2eproto,
    file_level_enum_descriptors_bookstore_5fproto_2eproto,
    file_level_service_descriptors_bookstore_5fproto_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_bookstore_5fproto_2eproto_getter() {
  return &descriptor_table_bookstore_5fproto_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_bookstore_5fproto_2eproto(&descriptor_table_bookstore_5fproto_2eproto);
namespace store {
// ===================================================================

class GetReq::_Internal {
 public:
};

GetReq::GetReq(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:store.GetReq)
}
GetReq::GetReq(const GetReq& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:store.GetReq)
}

inline void GetReq::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.book_id_) { 0 }

    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GetReq::~GetReq() {
  // @@protoc_insertion_point(destructor:store.GetReq)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GetReq::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void GetReq::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GetReq::Clear() {
// @@protoc_insertion_point(message_clear_start:store.GetReq)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.book_id_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetReq::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 book_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _impl_.book_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* GetReq::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:store.GetReq)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 book_id = 1;
  if (this->_internal_book_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        1, this->_internal_book_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store.GetReq)
  return target;
}

::size_t GetReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:store.GetReq)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 book_id = 1;
  if (this->_internal_book_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_book_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetReq::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GetReq::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetReq::GetClassData() const { return &_class_data_; }


void GetReq::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GetReq*>(&to_msg);
  auto& from = static_cast<const GetReq&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:store.GetReq)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_book_id() != 0) {
    _this->_internal_set_book_id(from._internal_book_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetReq::CopyFrom(const GetReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.GetReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetReq::IsInitialized() const {
  return true;
}

void GetReq::InternalSwap(GetReq* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);

  swap(_impl_.book_id_, other->_impl_.book_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GetReq::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_bookstore_5fproto_2eproto_getter, &descriptor_table_bookstore_5fproto_2eproto_once,
      file_level_metadata_bookstore_5fproto_2eproto[0]);
}
// ===================================================================

class BookInfo::_Internal {
 public:
};

BookInfo::BookInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:store.BookInfo)
}
BookInfo::BookInfo(const BookInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  BookInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.book_title_) {}

    , decltype(_impl_.author_) {}

    , decltype(_impl_.book_id_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.book_title_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.book_title_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_book_title().empty()) {
    _this->_impl_.book_title_.Set(from._internal_book_title(), _this->GetArenaForAllocation());
  }
  _impl_.author_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.author_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_author().empty()) {
    _this->_impl_.author_.Set(from._internal_author(), _this->GetArenaForAllocation());
  }
  _this->_impl_.book_id_ = from._impl_.book_id_;
  // @@protoc_insertion_point(copy_constructor:store.BookInfo)
}

inline void BookInfo::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.book_title_) {}

    , decltype(_impl_.author_) {}

    , decltype(_impl_.book_id_) { 0 }

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.book_title_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.book_title_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.author_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.author_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

BookInfo::~BookInfo() {
  // @@protoc_insertion_point(destructor:store.BookInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void BookInfo::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.book_title_.Destroy();
  _impl_.author_.Destroy();
}

void BookInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void BookInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:store.BookInfo)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.book_title_.ClearToEmpty();
  _impl_.author_.ClearToEmpty();
  _impl_.book_id_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BookInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 book_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _impl_.book_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // string book_title = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_book_title();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "store.BookInfo.book_title"));
        } else {
          goto handle_unusual;
        }
        continue;
      // string author = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_author();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "store.BookInfo.author"));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* BookInfo::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:store.BookInfo)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 book_id = 1;
  if (this->_internal_book_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        1, this->_internal_book_id(), target);
  }

  // string book_title = 2;
  if (!this->_internal_book_title().empty()) {
    const std::string& _s = this->_internal_book_title();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "store.BookInfo.book_title");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // string author = 3;
  if (!this->_internal_author().empty()) {
    const std::string& _s = this->_internal_author();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "store.BookInfo.author");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store.BookInfo)
  return target;
}

::size_t BookInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:store.BookInfo)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string book_title = 2;
  if (!this->_internal_book_title().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_book_title());
  }

  // string author = 3;
  if (!this->_internal_author().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_author());
  }

  // int32 book_id = 1;
  if (this->_internal_book_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_book_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData BookInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    BookInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*BookInfo::GetClassData() const { return &_class_data_; }


void BookInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<BookInfo*>(&to_msg);
  auto& from = static_cast<const BookInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:store.BookInfo)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_book_title().empty()) {
    _this->_internal_set_book_title(from._internal_book_title());
  }
  if (!from._internal_author().empty()) {
    _this->_internal_set_author(from._internal_author());
  }
  if (from._internal_book_id() != 0) {
    _this->_internal_set_book_id(from._internal_book_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void BookInfo::CopyFrom(const BookInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.BookInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BookInfo::IsInitialized() const {
  return true;
}

void BookInfo::InternalSwap(BookInfo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.book_title_, lhs_arena,
                                       &other->_impl_.book_title_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.author_, lhs_arena,
                                       &other->_impl_.author_, rhs_arena);

  swap(_impl_.book_id_, other->_impl_.book_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata BookInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_bookstore_5fproto_2eproto_getter, &descriptor_table_bookstore_5fproto_2eproto_once,
      file_level_metadata_bookstore_5fproto_2eproto[1]);
}
// ===================================================================

class BookList::_Internal {
 public:
};

BookList::BookList(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:store.BookList)
}
BookList::BookList(const BookList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  BookList* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.booklist_){from._impl_.booklist_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:store.BookList)
}

inline void BookList::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.booklist_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

BookList::~BookList() {
  // @@protoc_insertion_point(destructor:store.BookList)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void BookList::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_booklist()->~RepeatedPtrField();
}

void BookList::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void BookList::Clear() {
// @@protoc_insertion_point(message_clear_start:store.BookList)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_booklist()->Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BookList::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .store.BookInfo bookList = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_booklist(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* BookList::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:store.BookList)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .store.BookInfo bookList = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_booklist_size()); i < n; i++) {
    const auto& repfield = this->_internal_booklist(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store.BookList)
  return target;
}

::size_t BookList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:store.BookList)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .store.BookInfo bookList = 1;
  total_size += 1UL * this->_internal_booklist_size();
  for (const auto& msg : this->_internal_booklist()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData BookList::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    BookList::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*BookList::GetClassData() const { return &_class_data_; }


void BookList::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<BookList*>(&to_msg);
  auto& from = static_cast<const BookList&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:store.BookList)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_booklist()->MergeFrom(from._internal_booklist());
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void BookList::CopyFrom(const BookList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.BookList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BookList::IsInitialized() const {
  return true;
}

void BookList::InternalSwap(BookList* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _internal_mutable_booklist()->InternalSwap(other->_internal_mutable_booklist());
}

::PROTOBUF_NAMESPACE_ID::Metadata BookList::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_bookstore_5fproto_2eproto_getter, &descriptor_table_bookstore_5fproto_2eproto_once,
      file_level_metadata_bookstore_5fproto_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace store
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::store::GetReq*
Arena::CreateMaybeMessage< ::store::GetReq >(Arena* arena) {
  return Arena::CreateMessageInternal< ::store::GetReq >(arena);
}
template<> PROTOBUF_NOINLINE ::store::BookInfo*
Arena::CreateMaybeMessage< ::store::BookInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::store::BookInfo >(arena);
}
template<> PROTOBUF_NOINLINE ::store::BookList*
Arena::CreateMaybeMessage< ::store::BookList >(Arena* arena) {
  return Arena::CreateMessageInternal< ::store::BookList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"