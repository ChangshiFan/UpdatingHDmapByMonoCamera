// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace test {
class ArmorSizeDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ArmorSize>
     _instance;
} _ArmorSize_default_instance_;
class ConstraintSetConfigDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ConstraintSetConfig>
     _instance;
} _ConstraintSetConfig_default_instance_;

namespace protobuf_test_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArmorSize, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArmorSize, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArmorSize, width_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArmorSize, height_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConstraintSetConfig, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConstraintSetConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConstraintSetConfig, using_hsv_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConstraintSetConfig, num_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConstraintSetConfig, armor_size_),
  1,
  2,
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(ArmorSize)},
  { 9, 17, sizeof(ConstraintSetConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ArmorSize_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_ConstraintSetConfig_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "test.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ArmorSize_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ArmorSize_default_instance_);_ConstraintSetConfig_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ConstraintSetConfig_default_instance_);_ConstraintSetConfig_default_instance_._instance.get_mutable()->armor_size_ = const_cast< ::test::ArmorSize*>(
      ::test::ArmorSize::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\ntest.proto\022\004test\"*\n\tArmorSize\022\r\n\005width"
      "\030\001 \002(\002\022\016\n\006height\030\002 \002(\002\"Z\n\023ConstraintSetC"
      "onfig\022\021\n\tusing_hsv\030\001 \002(\010\022\013\n\003num\030\002 \002(\002\022#\n"
      "\narmor_size\030\003 \002(\0132\017.test.ArmorSize"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 154);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_test_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ArmorSize::kWidthFieldNumber;
const int ArmorSize::kHeightFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ArmorSize::ArmorSize()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_test_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:test.ArmorSize)
}
ArmorSize::ArmorSize(const ArmorSize& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&width_, &from.width_,
    static_cast<size_t>(reinterpret_cast<char*>(&height_) -
    reinterpret_cast<char*>(&width_)) + sizeof(height_));
  // @@protoc_insertion_point(copy_constructor:test.ArmorSize)
}

void ArmorSize::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&height_) -
      reinterpret_cast<char*>(&width_)) + sizeof(height_));
}

ArmorSize::~ArmorSize() {
  // @@protoc_insertion_point(destructor:test.ArmorSize)
  SharedDtor();
}

void ArmorSize::SharedDtor() {
}

void ArmorSize::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ArmorSize::descriptor() {
  protobuf_test_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_test_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ArmorSize& ArmorSize::default_instance() {
  protobuf_test_2eproto::InitDefaults();
  return *internal_default_instance();
}

ArmorSize* ArmorSize::New(::google::protobuf::Arena* arena) const {
  ArmorSize* n = new ArmorSize;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ArmorSize::Clear() {
// @@protoc_insertion_point(message_clear_start:test.ArmorSize)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&width_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&height_) -
        reinterpret_cast<char*>(&width_)) + sizeof(height_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ArmorSize::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:test.ArmorSize)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required float width = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(13u /* 13 & 0xFF */)) {
          set_has_width();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &width_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required float height = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {
          set_has_height();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &height_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:test.ArmorSize)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:test.ArmorSize)
  return false;
#undef DO_
}

void ArmorSize::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:test.ArmorSize)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required float width = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->width(), output);
  }

  // required float height = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->height(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:test.ArmorSize)
}

::google::protobuf::uint8* ArmorSize::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:test.ArmorSize)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required float width = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->width(), target);
  }

  // required float height = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->height(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:test.ArmorSize)
  return target;
}

size_t ArmorSize::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:test.ArmorSize)
  size_t total_size = 0;

  if (has_width()) {
    // required float width = 1;
    total_size += 1 + 4;
  }

  if (has_height()) {
    // required float height = 2;
    total_size += 1 + 4;
  }

  return total_size;
}
size_t ArmorSize::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:test.ArmorSize)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required float width = 1;
    total_size += 1 + 4;

    // required float height = 2;
    total_size += 1 + 4;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArmorSize::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:test.ArmorSize)
  GOOGLE_DCHECK_NE(&from, this);
  const ArmorSize* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ArmorSize>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:test.ArmorSize)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:test.ArmorSize)
    MergeFrom(*source);
  }
}

void ArmorSize::MergeFrom(const ArmorSize& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:test.ArmorSize)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      width_ = from.width_;
    }
    if (cached_has_bits & 0x00000002u) {
      height_ = from.height_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ArmorSize::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:test.ArmorSize)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ArmorSize::CopyFrom(const ArmorSize& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test.ArmorSize)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArmorSize::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void ArmorSize::Swap(ArmorSize* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ArmorSize::InternalSwap(ArmorSize* other) {
  using std::swap;
  swap(width_, other->width_);
  swap(height_, other->height_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ArmorSize::GetMetadata() const {
  protobuf_test_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_test_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ArmorSize

// required float width = 1;
bool ArmorSize::has_width() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ArmorSize::set_has_width() {
  _has_bits_[0] |= 0x00000001u;
}
void ArmorSize::clear_has_width() {
  _has_bits_[0] &= ~0x00000001u;
}
void ArmorSize::clear_width() {
  width_ = 0;
  clear_has_width();
}
float ArmorSize::width() const {
  // @@protoc_insertion_point(field_get:test.ArmorSize.width)
  return width_;
}
void ArmorSize::set_width(float value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:test.ArmorSize.width)
}

// required float height = 2;
bool ArmorSize::has_height() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ArmorSize::set_has_height() {
  _has_bits_[0] |= 0x00000002u;
}
void ArmorSize::clear_has_height() {
  _has_bits_[0] &= ~0x00000002u;
}
void ArmorSize::clear_height() {
  height_ = 0;
  clear_has_height();
}
float ArmorSize::height() const {
  // @@protoc_insertion_point(field_get:test.ArmorSize.height)
  return height_;
}
void ArmorSize::set_height(float value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:test.ArmorSize.height)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ConstraintSetConfig::kUsingHsvFieldNumber;
const int ConstraintSetConfig::kNumFieldNumber;
const int ConstraintSetConfig::kArmorSizeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ConstraintSetConfig::ConstraintSetConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_test_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:test.ConstraintSetConfig)
}
ConstraintSetConfig::ConstraintSetConfig(const ConstraintSetConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_armor_size()) {
    armor_size_ = new ::test::ArmorSize(*from.armor_size_);
  } else {
    armor_size_ = NULL;
  }
  ::memcpy(&using_hsv_, &from.using_hsv_,
    static_cast<size_t>(reinterpret_cast<char*>(&num_) -
    reinterpret_cast<char*>(&using_hsv_)) + sizeof(num_));
  // @@protoc_insertion_point(copy_constructor:test.ConstraintSetConfig)
}

void ConstraintSetConfig::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&armor_size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&num_) -
      reinterpret_cast<char*>(&armor_size_)) + sizeof(num_));
}

ConstraintSetConfig::~ConstraintSetConfig() {
  // @@protoc_insertion_point(destructor:test.ConstraintSetConfig)
  SharedDtor();
}

void ConstraintSetConfig::SharedDtor() {
  if (this != internal_default_instance()) delete armor_size_;
}

void ConstraintSetConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConstraintSetConfig::descriptor() {
  protobuf_test_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_test_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ConstraintSetConfig& ConstraintSetConfig::default_instance() {
  protobuf_test_2eproto::InitDefaults();
  return *internal_default_instance();
}

ConstraintSetConfig* ConstraintSetConfig::New(::google::protobuf::Arena* arena) const {
  ConstraintSetConfig* n = new ConstraintSetConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ConstraintSetConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:test.ConstraintSetConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (has_armor_size()) {
    GOOGLE_DCHECK(armor_size_ != NULL);
    armor_size_->::test::ArmorSize::Clear();
  }
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 6u) {
    ::memset(&using_hsv_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&num_) -
        reinterpret_cast<char*>(&using_hsv_)) + sizeof(num_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ConstraintSetConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:test.ConstraintSetConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool using_hsv = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_using_hsv();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &using_hsv_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required float num = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {
          set_has_num();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .test.ArmorSize armor_size = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_armor_size()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:test.ConstraintSetConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:test.ConstraintSetConfig)
  return false;
#undef DO_
}

void ConstraintSetConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:test.ConstraintSetConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool using_hsv = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->using_hsv(), output);
  }

  // required float num = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->num(), output);
  }

  // required .test.ArmorSize armor_size = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->armor_size_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:test.ConstraintSetConfig)
}

::google::protobuf::uint8* ConstraintSetConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:test.ConstraintSetConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool using_hsv = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->using_hsv(), target);
  }

  // required float num = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->num(), target);
  }

  // required .test.ArmorSize armor_size = 3;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->armor_size_, deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:test.ConstraintSetConfig)
  return target;
}

size_t ConstraintSetConfig::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:test.ConstraintSetConfig)
  size_t total_size = 0;

  if (has_armor_size()) {
    // required .test.ArmorSize armor_size = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->armor_size_);
  }

  if (has_using_hsv()) {
    // required bool using_hsv = 1;
    total_size += 1 + 1;
  }

  if (has_num()) {
    // required float num = 2;
    total_size += 1 + 4;
  }

  return total_size;
}
size_t ConstraintSetConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:test.ConstraintSetConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required .test.ArmorSize armor_size = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->armor_size_);

    // required bool using_hsv = 1;
    total_size += 1 + 1;

    // required float num = 2;
    total_size += 1 + 4;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ConstraintSetConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:test.ConstraintSetConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const ConstraintSetConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ConstraintSetConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:test.ConstraintSetConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:test.ConstraintSetConfig)
    MergeFrom(*source);
  }
}

void ConstraintSetConfig::MergeFrom(const ConstraintSetConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:test.ConstraintSetConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_armor_size()->::test::ArmorSize::MergeFrom(from.armor_size());
    }
    if (cached_has_bits & 0x00000002u) {
      using_hsv_ = from.using_hsv_;
    }
    if (cached_has_bits & 0x00000004u) {
      num_ = from.num_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ConstraintSetConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:test.ConstraintSetConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConstraintSetConfig::CopyFrom(const ConstraintSetConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test.ConstraintSetConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConstraintSetConfig::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  if (has_armor_size()) {
    if (!this->armor_size_->IsInitialized()) return false;
  }
  return true;
}

void ConstraintSetConfig::Swap(ConstraintSetConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ConstraintSetConfig::InternalSwap(ConstraintSetConfig* other) {
  using std::swap;
  swap(armor_size_, other->armor_size_);
  swap(using_hsv_, other->using_hsv_);
  swap(num_, other->num_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ConstraintSetConfig::GetMetadata() const {
  protobuf_test_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_test_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ConstraintSetConfig

// required bool using_hsv = 1;
bool ConstraintSetConfig::has_using_hsv() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ConstraintSetConfig::set_has_using_hsv() {
  _has_bits_[0] |= 0x00000002u;
}
void ConstraintSetConfig::clear_has_using_hsv() {
  _has_bits_[0] &= ~0x00000002u;
}
void ConstraintSetConfig::clear_using_hsv() {
  using_hsv_ = false;
  clear_has_using_hsv();
}
bool ConstraintSetConfig::using_hsv() const {
  // @@protoc_insertion_point(field_get:test.ConstraintSetConfig.using_hsv)
  return using_hsv_;
}
void ConstraintSetConfig::set_using_hsv(bool value) {
  set_has_using_hsv();
  using_hsv_ = value;
  // @@protoc_insertion_point(field_set:test.ConstraintSetConfig.using_hsv)
}

// required float num = 2;
bool ConstraintSetConfig::has_num() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ConstraintSetConfig::set_has_num() {
  _has_bits_[0] |= 0x00000004u;
}
void ConstraintSetConfig::clear_has_num() {
  _has_bits_[0] &= ~0x00000004u;
}
void ConstraintSetConfig::clear_num() {
  num_ = 0;
  clear_has_num();
}
float ConstraintSetConfig::num() const {
  // @@protoc_insertion_point(field_get:test.ConstraintSetConfig.num)
  return num_;
}
void ConstraintSetConfig::set_num(float value) {
  set_has_num();
  num_ = value;
  // @@protoc_insertion_point(field_set:test.ConstraintSetConfig.num)
}

// required .test.ArmorSize armor_size = 3;
bool ConstraintSetConfig::has_armor_size() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ConstraintSetConfig::set_has_armor_size() {
  _has_bits_[0] |= 0x00000001u;
}
void ConstraintSetConfig::clear_has_armor_size() {
  _has_bits_[0] &= ~0x00000001u;
}
void ConstraintSetConfig::clear_armor_size() {
  if (armor_size_ != NULL) armor_size_->::test::ArmorSize::Clear();
  clear_has_armor_size();
}
const ::test::ArmorSize& ConstraintSetConfig::armor_size() const {
  const ::test::ArmorSize* p = armor_size_;
  // @@protoc_insertion_point(field_get:test.ConstraintSetConfig.armor_size)
  return p != NULL ? *p : *reinterpret_cast<const ::test::ArmorSize*>(
      &::test::_ArmorSize_default_instance_);
}
::test::ArmorSize* ConstraintSetConfig::mutable_armor_size() {
  set_has_armor_size();
  if (armor_size_ == NULL) {
    armor_size_ = new ::test::ArmorSize;
  }
  // @@protoc_insertion_point(field_mutable:test.ConstraintSetConfig.armor_size)
  return armor_size_;
}
::test::ArmorSize* ConstraintSetConfig::release_armor_size() {
  // @@protoc_insertion_point(field_release:test.ConstraintSetConfig.armor_size)
  clear_has_armor_size();
  ::test::ArmorSize* temp = armor_size_;
  armor_size_ = NULL;
  return temp;
}
void ConstraintSetConfig::set_allocated_armor_size(::test::ArmorSize* armor_size) {
  delete armor_size_;
  armor_size_ = armor_size;
  if (armor_size) {
    set_has_armor_size();
  } else {
    clear_has_armor_size();
  }
  // @@protoc_insertion_point(field_set_allocated:test.ConstraintSetConfig.armor_size)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace test

// @@protoc_insertion_point(global_scope)