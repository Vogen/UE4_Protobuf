// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GameState.proto

#ifndef PROTOBUF_GameState_2eproto__INCLUDED
#define PROTOBUF_GameState_2eproto__INCLUDED

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

namespace protobuf_GameState_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsGameStateImpl();
void InitDefaultsGameState();
inline void InitDefaults() {
  InitDefaultsGameState();
}
}  // namespace protobuf_GameState_2eproto
namespace mongo {
class GameState;
class GameStateDefaultTypeInternal;
extern GameStateDefaultTypeInternal _GameState_default_instance_;
}  // namespace mongo
namespace mongo {

// ===================================================================

class GameState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mongo.GameState) */ {
 public:
  GameState();
  virtual ~GameState();

  GameState(const GameState& from);

  inline GameState& operator=(const GameState& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GameState(GameState&& from) noexcept
    : GameState() {
    *this = ::std::move(from);
  }

  inline GameState& operator=(GameState&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GameState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GameState* internal_default_instance() {
    return reinterpret_cast<const GameState*>(
               &_GameState_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(GameState* other);
  friend void swap(GameState& a, GameState& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GameState* New() const PROTOBUF_FINAL { return New(NULL); }

  GameState* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GameState& from);
  void MergeFrom(const GameState& from);
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
  void InternalSwap(GameState* other);
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

  // repeated uint32 player_uid = 2;
  int player_uid_size() const;
  void clear_player_uid();
  static const int kPlayerUidFieldNumber = 2;
  ::google::protobuf::uint32 player_uid(int index) const;
  void set_player_uid(int index, ::google::protobuf::uint32 value);
  void add_player_uid(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      player_uid() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_player_uid();

  // int64 timestamp = 1;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  ::google::protobuf::int64 timestamp() const;
  void set_timestamp(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:mongo.GameState)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > player_uid_;
  mutable int _player_uid_cached_byte_size_;
  ::google::protobuf::int64 timestamp_;
  mutable int _cached_size_;
  friend struct ::protobuf_GameState_2eproto::TableStruct;
  friend void ::protobuf_GameState_2eproto::InitDefaultsGameStateImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GameState

// int64 timestamp = 1;
inline void GameState::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 GameState::timestamp() const {
  // @@protoc_insertion_point(field_get:mongo.GameState.timestamp)
  return timestamp_;
}
inline void GameState::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:mongo.GameState.timestamp)
}

// repeated uint32 player_uid = 2;
inline int GameState::player_uid_size() const {
  return player_uid_.size();
}
inline void GameState::clear_player_uid() {
  player_uid_.Clear();
}
inline ::google::protobuf::uint32 GameState::player_uid(int index) const {
  // @@protoc_insertion_point(field_get:mongo.GameState.player_uid)
  return player_uid_.Get(index);
}
inline void GameState::set_player_uid(int index, ::google::protobuf::uint32 value) {
  player_uid_.Set(index, value);
  // @@protoc_insertion_point(field_set:mongo.GameState.player_uid)
}
inline void GameState::add_player_uid(::google::protobuf::uint32 value) {
  player_uid_.Add(value);
  // @@protoc_insertion_point(field_add:mongo.GameState.player_uid)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
GameState::player_uid() const {
  // @@protoc_insertion_point(field_list:mongo.GameState.player_uid)
  return player_uid_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
GameState::mutable_player_uid() {
  // @@protoc_insertion_point(field_mutable_list:mongo.GameState.player_uid)
  return &player_uid_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mongo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GameState_2eproto__INCLUDED
