// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TrafficLight.proto

#ifndef PROTOBUF_TrafficLight_2eproto__INCLUDED
#define PROTOBUF_TrafficLight_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
namespace hdmap {
class Light;
class LightDefaultTypeInternal;
extern LightDefaultTypeInternal _Light_default_instance_;
class TrafficLight;
class TrafficLightDefaultTypeInternal;
extern TrafficLightDefaultTypeInternal _TrafficLight_default_instance_;
class TrafficLightPerCapture;
class TrafficLightPerCaptureDefaultTypeInternal;
extern TrafficLightPerCaptureDefaultTypeInternal _TrafficLightPerCapture_default_instance_;
class TrafficLightPerFrame;
class TrafficLightPerFrameDefaultTypeInternal;
extern TrafficLightPerFrameDefaultTypeInternal _TrafficLightPerFrame_default_instance_;
}  // namespace hdmap

namespace hdmap {

namespace protobuf_TrafficLight_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_TrafficLight_2eproto

// ===================================================================

class Light : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hdmap.Light) */ {
 public:
  Light();
  virtual ~Light();

  Light(const Light& from);

  inline Light& operator=(const Light& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Light(Light&& from) noexcept
    : Light() {
    *this = ::std::move(from);
  }

  inline Light& operator=(Light&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Light& default_instance();

  static inline const Light* internal_default_instance() {
    return reinterpret_cast<const Light*>(
               &_Light_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Light* other);
  friend void swap(Light& a, Light& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Light* New() const PROTOBUF_FINAL { return New(NULL); }

  Light* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Light& from);
  void MergeFrom(const Light& from);
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
  void InternalSwap(Light* other);
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

  // string geometry = 2;
  void clear_geometry();
  static const int kGeometryFieldNumber = 2;
  const ::std::string& geometry() const;
  void set_geometry(const ::std::string& value);
  #if LANG_CXX11
  void set_geometry(::std::string&& value);
  #endif
  void set_geometry(const char* value);
  void set_geometry(const char* value, size_t size);
  ::std::string* mutable_geometry();
  ::std::string* release_geometry();
  void set_allocated_geometry(::std::string* geometry);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // int32 direction = 3;
  void clear_direction();
  static const int kDirectionFieldNumber = 3;
  ::google::protobuf::int32 direction() const;
  void set_direction(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:hdmap.Light)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr geometry_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 direction_;
  mutable int _cached_size_;
  friend struct protobuf_TrafficLight_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TrafficLight : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hdmap.TrafficLight) */ {
 public:
  TrafficLight();
  virtual ~TrafficLight();

  TrafficLight(const TrafficLight& from);

  inline TrafficLight& operator=(const TrafficLight& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TrafficLight(TrafficLight&& from) noexcept
    : TrafficLight() {
    *this = ::std::move(from);
  }

  inline TrafficLight& operator=(TrafficLight&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TrafficLight& default_instance();

  static inline const TrafficLight* internal_default_instance() {
    return reinterpret_cast<const TrafficLight*>(
               &_TrafficLight_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(TrafficLight* other);
  friend void swap(TrafficLight& a, TrafficLight& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TrafficLight* New() const PROTOBUF_FINAL { return New(NULL); }

  TrafficLight* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TrafficLight& from);
  void MergeFrom(const TrafficLight& from);
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
  void InternalSwap(TrafficLight* other);
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

  // repeated .hdmap.Light lights = 4;
  int lights_size() const;
  void clear_lights();
  static const int kLightsFieldNumber = 4;
  const ::hdmap::Light& lights(int index) const;
  ::hdmap::Light* mutable_lights(int index);
  ::hdmap::Light* add_lights();
  ::google::protobuf::RepeatedPtrField< ::hdmap::Light >*
      mutable_lights();
  const ::google::protobuf::RepeatedPtrField< ::hdmap::Light >&
      lights() const;

  // string geometry = 2;
  void clear_geometry();
  static const int kGeometryFieldNumber = 2;
  const ::std::string& geometry() const;
  void set_geometry(const ::std::string& value);
  #if LANG_CXX11
  void set_geometry(::std::string&& value);
  #endif
  void set_geometry(const char* value);
  void set_geometry(const char* value, size_t size);
  ::std::string* mutable_geometry();
  ::std::string* release_geometry();
  void set_allocated_geometry(::std::string* geometry);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // int32 motor_type = 3;
  void clear_motor_type();
  static const int kMotorTypeFieldNumber = 3;
  ::google::protobuf::int32 motor_type() const;
  void set_motor_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:hdmap.TrafficLight)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::hdmap::Light > lights_;
  ::google::protobuf::internal::ArenaStringPtr geometry_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 motor_type_;
  mutable int _cached_size_;
  friend struct protobuf_TrafficLight_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TrafficLightPerFrame : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hdmap.TrafficLightPerFrame) */ {
 public:
  TrafficLightPerFrame();
  virtual ~TrafficLightPerFrame();

  TrafficLightPerFrame(const TrafficLightPerFrame& from);

  inline TrafficLightPerFrame& operator=(const TrafficLightPerFrame& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TrafficLightPerFrame(TrafficLightPerFrame&& from) noexcept
    : TrafficLightPerFrame() {
    *this = ::std::move(from);
  }

  inline TrafficLightPerFrame& operator=(TrafficLightPerFrame&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TrafficLightPerFrame& default_instance();

  static inline const TrafficLightPerFrame* internal_default_instance() {
    return reinterpret_cast<const TrafficLightPerFrame*>(
               &_TrafficLightPerFrame_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(TrafficLightPerFrame* other);
  friend void swap(TrafficLightPerFrame& a, TrafficLightPerFrame& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TrafficLightPerFrame* New() const PROTOBUF_FINAL { return New(NULL); }

  TrafficLightPerFrame* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TrafficLightPerFrame& from);
  void MergeFrom(const TrafficLightPerFrame& from);
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
  void InternalSwap(TrafficLightPerFrame* other);
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

  // repeated .hdmap.TrafficLight traffic_lights = 2;
  int traffic_lights_size() const;
  void clear_traffic_lights();
  static const int kTrafficLightsFieldNumber = 2;
  const ::hdmap::TrafficLight& traffic_lights(int index) const;
  ::hdmap::TrafficLight* mutable_traffic_lights(int index);
  ::hdmap::TrafficLight* add_traffic_lights();
  ::google::protobuf::RepeatedPtrField< ::hdmap::TrafficLight >*
      mutable_traffic_lights();
  const ::google::protobuf::RepeatedPtrField< ::hdmap::TrafficLight >&
      traffic_lights() const;

  // int32 frame_id = 1;
  void clear_frame_id();
  static const int kFrameIdFieldNumber = 1;
  ::google::protobuf::int32 frame_id() const;
  void set_frame_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:hdmap.TrafficLightPerFrame)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::hdmap::TrafficLight > traffic_lights_;
  ::google::protobuf::int32 frame_id_;
  mutable int _cached_size_;
  friend struct protobuf_TrafficLight_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TrafficLightPerCapture : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hdmap.TrafficLightPerCapture) */ {
 public:
  TrafficLightPerCapture();
  virtual ~TrafficLightPerCapture();

  TrafficLightPerCapture(const TrafficLightPerCapture& from);

  inline TrafficLightPerCapture& operator=(const TrafficLightPerCapture& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TrafficLightPerCapture(TrafficLightPerCapture&& from) noexcept
    : TrafficLightPerCapture() {
    *this = ::std::move(from);
  }

  inline TrafficLightPerCapture& operator=(TrafficLightPerCapture&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TrafficLightPerCapture& default_instance();

  static inline const TrafficLightPerCapture* internal_default_instance() {
    return reinterpret_cast<const TrafficLightPerCapture*>(
               &_TrafficLightPerCapture_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(TrafficLightPerCapture* other);
  friend void swap(TrafficLightPerCapture& a, TrafficLightPerCapture& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TrafficLightPerCapture* New() const PROTOBUF_FINAL { return New(NULL); }

  TrafficLightPerCapture* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TrafficLightPerCapture& from);
  void MergeFrom(const TrafficLightPerCapture& from);
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
  void InternalSwap(TrafficLightPerCapture* other);
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

  // repeated .hdmap.TrafficLightPerFrame traffic_light_frames = 2;
  int traffic_light_frames_size() const;
  void clear_traffic_light_frames();
  static const int kTrafficLightFramesFieldNumber = 2;
  const ::hdmap::TrafficLightPerFrame& traffic_light_frames(int index) const;
  ::hdmap::TrafficLightPerFrame* mutable_traffic_light_frames(int index);
  ::hdmap::TrafficLightPerFrame* add_traffic_light_frames();
  ::google::protobuf::RepeatedPtrField< ::hdmap::TrafficLightPerFrame >*
      mutable_traffic_light_frames();
  const ::google::protobuf::RepeatedPtrField< ::hdmap::TrafficLightPerFrame >&
      traffic_light_frames() const;

  // string scene_id = 1;
  void clear_scene_id();
  static const int kSceneIdFieldNumber = 1;
  const ::std::string& scene_id() const;
  void set_scene_id(const ::std::string& value);
  #if LANG_CXX11
  void set_scene_id(::std::string&& value);
  #endif
  void set_scene_id(const char* value);
  void set_scene_id(const char* value, size_t size);
  ::std::string* mutable_scene_id();
  ::std::string* release_scene_id();
  void set_allocated_scene_id(::std::string* scene_id);

  // @@protoc_insertion_point(class_scope:hdmap.TrafficLightPerCapture)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::hdmap::TrafficLightPerFrame > traffic_light_frames_;
  ::google::protobuf::internal::ArenaStringPtr scene_id_;
  mutable int _cached_size_;
  friend struct protobuf_TrafficLight_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Light

// int32 id = 1;
inline void Light::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 Light::id() const {
  // @@protoc_insertion_point(field_get:hdmap.Light.id)
  return id_;
}
inline void Light::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:hdmap.Light.id)
}

// string geometry = 2;
inline void Light::clear_geometry() {
  geometry_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Light::geometry() const {
  // @@protoc_insertion_point(field_get:hdmap.Light.geometry)
  return geometry_.GetNoArena();
}
inline void Light::set_geometry(const ::std::string& value) {
  
  geometry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hdmap.Light.geometry)
}
#if LANG_CXX11
inline void Light::set_geometry(::std::string&& value) {
  
  geometry_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hdmap.Light.geometry)
}
#endif
inline void Light::set_geometry(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  geometry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hdmap.Light.geometry)
}
inline void Light::set_geometry(const char* value, size_t size) {
  
  geometry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hdmap.Light.geometry)
}
inline ::std::string* Light::mutable_geometry() {
  
  // @@protoc_insertion_point(field_mutable:hdmap.Light.geometry)
  return geometry_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Light::release_geometry() {
  // @@protoc_insertion_point(field_release:hdmap.Light.geometry)
  
  return geometry_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Light::set_allocated_geometry(::std::string* geometry) {
  if (geometry != NULL) {
    
  } else {
    
  }
  geometry_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), geometry);
  // @@protoc_insertion_point(field_set_allocated:hdmap.Light.geometry)
}

// int32 direction = 3;
inline void Light::clear_direction() {
  direction_ = 0;
}
inline ::google::protobuf::int32 Light::direction() const {
  // @@protoc_insertion_point(field_get:hdmap.Light.direction)
  return direction_;
}
inline void Light::set_direction(::google::protobuf::int32 value) {
  
  direction_ = value;
  // @@protoc_insertion_point(field_set:hdmap.Light.direction)
}

// -------------------------------------------------------------------

// TrafficLight

// int32 id = 1;
inline void TrafficLight::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 TrafficLight::id() const {
  // @@protoc_insertion_point(field_get:hdmap.TrafficLight.id)
  return id_;
}
inline void TrafficLight::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:hdmap.TrafficLight.id)
}

// string geometry = 2;
inline void TrafficLight::clear_geometry() {
  geometry_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TrafficLight::geometry() const {
  // @@protoc_insertion_point(field_get:hdmap.TrafficLight.geometry)
  return geometry_.GetNoArena();
}
inline void TrafficLight::set_geometry(const ::std::string& value) {
  
  geometry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hdmap.TrafficLight.geometry)
}
#if LANG_CXX11
inline void TrafficLight::set_geometry(::std::string&& value) {
  
  geometry_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hdmap.TrafficLight.geometry)
}
#endif
inline void TrafficLight::set_geometry(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  geometry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hdmap.TrafficLight.geometry)
}
inline void TrafficLight::set_geometry(const char* value, size_t size) {
  
  geometry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hdmap.TrafficLight.geometry)
}
inline ::std::string* TrafficLight::mutable_geometry() {
  
  // @@protoc_insertion_point(field_mutable:hdmap.TrafficLight.geometry)
  return geometry_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TrafficLight::release_geometry() {
  // @@protoc_insertion_point(field_release:hdmap.TrafficLight.geometry)
  
  return geometry_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TrafficLight::set_allocated_geometry(::std::string* geometry) {
  if (geometry != NULL) {
    
  } else {
    
  }
  geometry_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), geometry);
  // @@protoc_insertion_point(field_set_allocated:hdmap.TrafficLight.geometry)
}

// int32 motor_type = 3;
inline void TrafficLight::clear_motor_type() {
  motor_type_ = 0;
}
inline ::google::protobuf::int32 TrafficLight::motor_type() const {
  // @@protoc_insertion_point(field_get:hdmap.TrafficLight.motor_type)
  return motor_type_;
}
inline void TrafficLight::set_motor_type(::google::protobuf::int32 value) {
  
  motor_type_ = value;
  // @@protoc_insertion_point(field_set:hdmap.TrafficLight.motor_type)
}

// repeated .hdmap.Light lights = 4;
inline int TrafficLight::lights_size() const {
  return lights_.size();
}
inline void TrafficLight::clear_lights() {
  lights_.Clear();
}
inline const ::hdmap::Light& TrafficLight::lights(int index) const {
  // @@protoc_insertion_point(field_get:hdmap.TrafficLight.lights)
  return lights_.Get(index);
}
inline ::hdmap::Light* TrafficLight::mutable_lights(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap.TrafficLight.lights)
  return lights_.Mutable(index);
}
inline ::hdmap::Light* TrafficLight::add_lights() {
  // @@protoc_insertion_point(field_add:hdmap.TrafficLight.lights)
  return lights_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap::Light >*
TrafficLight::mutable_lights() {
  // @@protoc_insertion_point(field_mutable_list:hdmap.TrafficLight.lights)
  return &lights_;
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap::Light >&
TrafficLight::lights() const {
  // @@protoc_insertion_point(field_list:hdmap.TrafficLight.lights)
  return lights_;
}

// -------------------------------------------------------------------

// TrafficLightPerFrame

// int32 frame_id = 1;
inline void TrafficLightPerFrame::clear_frame_id() {
  frame_id_ = 0;
}
inline ::google::protobuf::int32 TrafficLightPerFrame::frame_id() const {
  // @@protoc_insertion_point(field_get:hdmap.TrafficLightPerFrame.frame_id)
  return frame_id_;
}
inline void TrafficLightPerFrame::set_frame_id(::google::protobuf::int32 value) {
  
  frame_id_ = value;
  // @@protoc_insertion_point(field_set:hdmap.TrafficLightPerFrame.frame_id)
}

// repeated .hdmap.TrafficLight traffic_lights = 2;
inline int TrafficLightPerFrame::traffic_lights_size() const {
  return traffic_lights_.size();
}
inline void TrafficLightPerFrame::clear_traffic_lights() {
  traffic_lights_.Clear();
}
inline const ::hdmap::TrafficLight& TrafficLightPerFrame::traffic_lights(int index) const {
  // @@protoc_insertion_point(field_get:hdmap.TrafficLightPerFrame.traffic_lights)
  return traffic_lights_.Get(index);
}
inline ::hdmap::TrafficLight* TrafficLightPerFrame::mutable_traffic_lights(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap.TrafficLightPerFrame.traffic_lights)
  return traffic_lights_.Mutable(index);
}
inline ::hdmap::TrafficLight* TrafficLightPerFrame::add_traffic_lights() {
  // @@protoc_insertion_point(field_add:hdmap.TrafficLightPerFrame.traffic_lights)
  return traffic_lights_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap::TrafficLight >*
TrafficLightPerFrame::mutable_traffic_lights() {
  // @@protoc_insertion_point(field_mutable_list:hdmap.TrafficLightPerFrame.traffic_lights)
  return &traffic_lights_;
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap::TrafficLight >&
TrafficLightPerFrame::traffic_lights() const {
  // @@protoc_insertion_point(field_list:hdmap.TrafficLightPerFrame.traffic_lights)
  return traffic_lights_;
}

// -------------------------------------------------------------------

// TrafficLightPerCapture

// string scene_id = 1;
inline void TrafficLightPerCapture::clear_scene_id() {
  scene_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TrafficLightPerCapture::scene_id() const {
  // @@protoc_insertion_point(field_get:hdmap.TrafficLightPerCapture.scene_id)
  return scene_id_.GetNoArena();
}
inline void TrafficLightPerCapture::set_scene_id(const ::std::string& value) {
  
  scene_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hdmap.TrafficLightPerCapture.scene_id)
}
#if LANG_CXX11
inline void TrafficLightPerCapture::set_scene_id(::std::string&& value) {
  
  scene_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hdmap.TrafficLightPerCapture.scene_id)
}
#endif
inline void TrafficLightPerCapture::set_scene_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  scene_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hdmap.TrafficLightPerCapture.scene_id)
}
inline void TrafficLightPerCapture::set_scene_id(const char* value, size_t size) {
  
  scene_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hdmap.TrafficLightPerCapture.scene_id)
}
inline ::std::string* TrafficLightPerCapture::mutable_scene_id() {
  
  // @@protoc_insertion_point(field_mutable:hdmap.TrafficLightPerCapture.scene_id)
  return scene_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TrafficLightPerCapture::release_scene_id() {
  // @@protoc_insertion_point(field_release:hdmap.TrafficLightPerCapture.scene_id)
  
  return scene_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TrafficLightPerCapture::set_allocated_scene_id(::std::string* scene_id) {
  if (scene_id != NULL) {
    
  } else {
    
  }
  scene_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), scene_id);
  // @@protoc_insertion_point(field_set_allocated:hdmap.TrafficLightPerCapture.scene_id)
}

// repeated .hdmap.TrafficLightPerFrame traffic_light_frames = 2;
inline int TrafficLightPerCapture::traffic_light_frames_size() const {
  return traffic_light_frames_.size();
}
inline void TrafficLightPerCapture::clear_traffic_light_frames() {
  traffic_light_frames_.Clear();
}
inline const ::hdmap::TrafficLightPerFrame& TrafficLightPerCapture::traffic_light_frames(int index) const {
  // @@protoc_insertion_point(field_get:hdmap.TrafficLightPerCapture.traffic_light_frames)
  return traffic_light_frames_.Get(index);
}
inline ::hdmap::TrafficLightPerFrame* TrafficLightPerCapture::mutable_traffic_light_frames(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap.TrafficLightPerCapture.traffic_light_frames)
  return traffic_light_frames_.Mutable(index);
}
inline ::hdmap::TrafficLightPerFrame* TrafficLightPerCapture::add_traffic_light_frames() {
  // @@protoc_insertion_point(field_add:hdmap.TrafficLightPerCapture.traffic_light_frames)
  return traffic_light_frames_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap::TrafficLightPerFrame >*
TrafficLightPerCapture::mutable_traffic_light_frames() {
  // @@protoc_insertion_point(field_mutable_list:hdmap.TrafficLightPerCapture.traffic_light_frames)
  return &traffic_light_frames_;
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap::TrafficLightPerFrame >&
TrafficLightPerCapture::traffic_light_frames() const {
  // @@protoc_insertion_point(field_list:hdmap.TrafficLightPerCapture.traffic_light_frames)
  return traffic_light_frames_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace hdmap

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_TrafficLight_2eproto__INCLUDED