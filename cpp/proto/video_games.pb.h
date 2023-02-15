// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/video_games.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fvideo_5fgames_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fvideo_5fgames_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "proto/utils.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fvideo_5fgames_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fvideo_5fgames_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fvideo_5fgames_2eproto;
namespace video_games {
class Game;
class GameDefaultTypeInternal;
extern GameDefaultTypeInternal _Game_default_instance_;
class Library;
class LibraryDefaultTypeInternal;
extern LibraryDefaultTypeInternal _Library_default_instance_;
class VideoGame;
class VideoGameDefaultTypeInternal;
extern VideoGameDefaultTypeInternal _VideoGame_default_instance_;
}  // namespace video_games
PROTOBUF_NAMESPACE_OPEN
template<> ::video_games::Game* Arena::CreateMaybeMessage<::video_games::Game>(Arena*);
template<> ::video_games::Library* Arena::CreateMaybeMessage<::video_games::Library>(Arena*);
template<> ::video_games::VideoGame* Arena::CreateMaybeMessage<::video_games::VideoGame>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace video_games {

enum Type : int {
  GENERIC = 0,
  SPORTS = 1,
  ADVENTURE = 2,
  Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Type_IsValid(int value);
constexpr Type Type_MIN = GENERIC;
constexpr Type Type_MAX = ADVENTURE;
constexpr int Type_ARRAYSIZE = Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Type_descriptor();
template<typename T>
inline const std::string& Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Type_descriptor(), enum_t_value);
}
inline bool Type_Parse(
    const std::string& name, Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Type>(
    Type_descriptor(), name, value);
}
// ===================================================================

class Game PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:video_games.Game) */ {
 public:
  inline Game() : Game(nullptr) {};
  virtual ~Game();

  Game(const Game& from);
  Game(Game&& from) noexcept
    : Game() {
    *this = ::std::move(from);
  }

  inline Game& operator=(const Game& from) {
    CopyFrom(from);
    return *this;
  }
  inline Game& operator=(Game&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Game& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Game* internal_default_instance() {
    return reinterpret_cast<const Game*>(
               &_Game_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Game& a, Game& b) {
    a.Swap(&b);
  }
  inline void Swap(Game* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Game* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Game* New() const final {
    return CreateMaybeMessage<Game>(nullptr);
  }

  Game* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Game>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Game& from);
  void MergeFrom(const Game& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Game* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "video_games.Game";
  }
  protected:
  explicit Game(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fvideo_5fgames_2eproto);
    return ::descriptor_table_proto_2fvideo_5fgames_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDateFieldNumber = 1,
    kDurationMinutesFieldNumber = 2,
  };
  // .utils.Date date = 1;
  bool has_date() const;
  private:
  bool _internal_has_date() const;
  public:
  void clear_date();
  const ::utils::Date& date() const;
  ::utils::Date* release_date();
  ::utils::Date* mutable_date();
  void set_allocated_date(::utils::Date* date);
  private:
  const ::utils::Date& _internal_date() const;
  ::utils::Date* _internal_mutable_date();
  public:
  void unsafe_arena_set_allocated_date(
      ::utils::Date* date);
  ::utils::Date* unsafe_arena_release_date();

  // uint32 duration_minutes = 2;
  void clear_duration_minutes();
  ::PROTOBUF_NAMESPACE_ID::uint32 duration_minutes() const;
  void set_duration_minutes(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_duration_minutes() const;
  void _internal_set_duration_minutes(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:video_games.Game)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::utils::Date* date_;
  ::PROTOBUF_NAMESPACE_ID::uint32 duration_minutes_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fvideo_5fgames_2eproto;
};
// -------------------------------------------------------------------

class VideoGame PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:video_games.VideoGame) */ {
 public:
  inline VideoGame() : VideoGame(nullptr) {};
  virtual ~VideoGame();

  VideoGame(const VideoGame& from);
  VideoGame(VideoGame&& from) noexcept
    : VideoGame() {
    *this = ::std::move(from);
  }

  inline VideoGame& operator=(const VideoGame& from) {
    CopyFrom(from);
    return *this;
  }
  inline VideoGame& operator=(VideoGame&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const VideoGame& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VideoGame* internal_default_instance() {
    return reinterpret_cast<const VideoGame*>(
               &_VideoGame_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(VideoGame& a, VideoGame& b) {
    a.Swap(&b);
  }
  inline void Swap(VideoGame* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(VideoGame* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VideoGame* New() const final {
    return CreateMaybeMessage<VideoGame>(nullptr);
  }

  VideoGame* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VideoGame>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VideoGame& from);
  void MergeFrom(const VideoGame& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VideoGame* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "video_games.VideoGame";
  }
  protected:
  explicit VideoGame(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fvideo_5fgames_2eproto);
    return ::descriptor_table_proto_2fvideo_5fgames_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTypeFieldNumber = 2,
    kGamesFieldNumber = 4,
    kTitleFieldNumber = 1,
    kLibraryAddDateFieldNumber = 3,
    kFavoriteFieldNumber = 5,
  };
  // repeated .video_games.Type type = 2;
  int type_size() const;
  private:
  int _internal_type_size() const;
  public:
  void clear_type();
  private:
  ::video_games::Type _internal_type(int index) const;
  void _internal_add_type(::video_games::Type value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_type();
  public:
  ::video_games::Type type(int index) const;
  void set_type(int index, ::video_games::Type value);
  void add_type(::video_games::Type value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& type() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_type();

  // repeated .video_games.Game games = 4;
  int games_size() const;
  private:
  int _internal_games_size() const;
  public:
  void clear_games();
  ::video_games::Game* mutable_games(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::video_games::Game >*
      mutable_games();
  private:
  const ::video_games::Game& _internal_games(int index) const;
  ::video_games::Game* _internal_add_games();
  public:
  const ::video_games::Game& games(int index) const;
  ::video_games::Game* add_games();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::video_games::Game >&
      games() const;

  // string title = 1;
  void clear_title();
  const std::string& title() const;
  void set_title(const std::string& value);
  void set_title(std::string&& value);
  void set_title(const char* value);
  void set_title(const char* value, size_t size);
  std::string* mutable_title();
  std::string* release_title();
  void set_allocated_title(std::string* title);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_title();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_title(
      std::string* title);
  private:
  const std::string& _internal_title() const;
  void _internal_set_title(const std::string& value);
  std::string* _internal_mutable_title();
  public:

  // .utils.Date library_add_date = 3;
  bool has_library_add_date() const;
  private:
  bool _internal_has_library_add_date() const;
  public:
  void clear_library_add_date();
  const ::utils::Date& library_add_date() const;
  ::utils::Date* release_library_add_date();
  ::utils::Date* mutable_library_add_date();
  void set_allocated_library_add_date(::utils::Date* library_add_date);
  private:
  const ::utils::Date& _internal_library_add_date() const;
  ::utils::Date* _internal_mutable_library_add_date();
  public:
  void unsafe_arena_set_allocated_library_add_date(
      ::utils::Date* library_add_date);
  ::utils::Date* unsafe_arena_release_library_add_date();

  // bool favorite = 5;
  void clear_favorite();
  bool favorite() const;
  void set_favorite(bool value);
  private:
  bool _internal_favorite() const;
  void _internal_set_favorite(bool value);
  public:

  // @@protoc_insertion_point(class_scope:video_games.VideoGame)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> type_;
  mutable std::atomic<int> _type_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::video_games::Game > games_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr title_;
  ::utils::Date* library_add_date_;
  bool favorite_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fvideo_5fgames_2eproto;
};
// -------------------------------------------------------------------

class Library PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:video_games.Library) */ {
 public:
  inline Library() : Library(nullptr) {};
  virtual ~Library();

  Library(const Library& from);
  Library(Library&& from) noexcept
    : Library() {
    *this = ::std::move(from);
  }

  inline Library& operator=(const Library& from) {
    CopyFrom(from);
    return *this;
  }
  inline Library& operator=(Library&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Library& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Library* internal_default_instance() {
    return reinterpret_cast<const Library*>(
               &_Library_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Library& a, Library& b) {
    a.Swap(&b);
  }
  inline void Swap(Library* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Library* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Library* New() const final {
    return CreateMaybeMessage<Library>(nullptr);
  }

  Library* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Library>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Library& from);
  void MergeFrom(const Library& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Library* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "video_games.Library";
  }
  protected:
  explicit Library(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fvideo_5fgames_2eproto);
    return ::descriptor_table_proto_2fvideo_5fgames_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kListFieldNumber = 1,
  };
  // repeated .video_games.VideoGame list = 1;
  int list_size() const;
  private:
  int _internal_list_size() const;
  public:
  void clear_list();
  ::video_games::VideoGame* mutable_list(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::video_games::VideoGame >*
      mutable_list();
  private:
  const ::video_games::VideoGame& _internal_list(int index) const;
  ::video_games::VideoGame* _internal_add_list();
  public:
  const ::video_games::VideoGame& list(int index) const;
  ::video_games::VideoGame* add_list();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::video_games::VideoGame >&
      list() const;

  // @@protoc_insertion_point(class_scope:video_games.Library)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::video_games::VideoGame > list_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fvideo_5fgames_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Game

// .utils.Date date = 1;
inline bool Game::_internal_has_date() const {
  return this != internal_default_instance() && date_ != nullptr;
}
inline bool Game::has_date() const {
  return _internal_has_date();
}
inline const ::utils::Date& Game::_internal_date() const {
  const ::utils::Date* p = date_;
  return p != nullptr ? *p : *reinterpret_cast<const ::utils::Date*>(
      &::utils::_Date_default_instance_);
}
inline const ::utils::Date& Game::date() const {
  // @@protoc_insertion_point(field_get:video_games.Game.date)
  return _internal_date();
}
inline void Game::unsafe_arena_set_allocated_date(
    ::utils::Date* date) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(date_);
  }
  date_ = date;
  if (date) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:video_games.Game.date)
}
inline ::utils::Date* Game::release_date() {
  auto temp = unsafe_arena_release_date();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::utils::Date* Game::unsafe_arena_release_date() {
  // @@protoc_insertion_point(field_release:video_games.Game.date)
  
  ::utils::Date* temp = date_;
  date_ = nullptr;
  return temp;
}
inline ::utils::Date* Game::_internal_mutable_date() {
  
  if (date_ == nullptr) {
    auto* p = CreateMaybeMessage<::utils::Date>(GetArena());
    date_ = p;
  }
  return date_;
}
inline ::utils::Date* Game::mutable_date() {
  // @@protoc_insertion_point(field_mutable:video_games.Game.date)
  return _internal_mutable_date();
}
inline void Game::set_allocated_date(::utils::Date* date) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(date_);
  }
  if (date) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(date)->GetArena();
    if (message_arena != submessage_arena) {
      date = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, date, submessage_arena);
    }
    
  } else {
    
  }
  date_ = date;
  // @@protoc_insertion_point(field_set_allocated:video_games.Game.date)
}

// uint32 duration_minutes = 2;
inline void Game::clear_duration_minutes() {
  duration_minutes_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Game::_internal_duration_minutes() const {
  return duration_minutes_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Game::duration_minutes() const {
  // @@protoc_insertion_point(field_get:video_games.Game.duration_minutes)
  return _internal_duration_minutes();
}
inline void Game::_internal_set_duration_minutes(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  duration_minutes_ = value;
}
inline void Game::set_duration_minutes(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_duration_minutes(value);
  // @@protoc_insertion_point(field_set:video_games.Game.duration_minutes)
}

// -------------------------------------------------------------------

// VideoGame

// string title = 1;
inline void VideoGame::clear_title() {
  title_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& VideoGame::title() const {
  // @@protoc_insertion_point(field_get:video_games.VideoGame.title)
  return _internal_title();
}
inline void VideoGame::set_title(const std::string& value) {
  _internal_set_title(value);
  // @@protoc_insertion_point(field_set:video_games.VideoGame.title)
}
inline std::string* VideoGame::mutable_title() {
  // @@protoc_insertion_point(field_mutable:video_games.VideoGame.title)
  return _internal_mutable_title();
}
inline const std::string& VideoGame::_internal_title() const {
  return title_.Get();
}
inline void VideoGame::_internal_set_title(const std::string& value) {
  
  title_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void VideoGame::set_title(std::string&& value) {
  
  title_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:video_games.VideoGame.title)
}
inline void VideoGame::set_title(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  title_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:video_games.VideoGame.title)
}
inline void VideoGame::set_title(const char* value,
    size_t size) {
  
  title_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:video_games.VideoGame.title)
}
inline std::string* VideoGame::_internal_mutable_title() {
  
  return title_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* VideoGame::release_title() {
  // @@protoc_insertion_point(field_release:video_games.VideoGame.title)
  return title_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void VideoGame::set_allocated_title(std::string* title) {
  if (title != nullptr) {
    
  } else {
    
  }
  title_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), title,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:video_games.VideoGame.title)
}
inline std::string* VideoGame::unsafe_arena_release_title() {
  // @@protoc_insertion_point(field_unsafe_arena_release:video_games.VideoGame.title)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return title_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void VideoGame::unsafe_arena_set_allocated_title(
    std::string* title) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (title != nullptr) {
    
  } else {
    
  }
  title_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      title, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:video_games.VideoGame.title)
}

// repeated .video_games.Type type = 2;
inline int VideoGame::_internal_type_size() const {
  return type_.size();
}
inline int VideoGame::type_size() const {
  return _internal_type_size();
}
inline void VideoGame::clear_type() {
  type_.Clear();
}
inline ::video_games::Type VideoGame::_internal_type(int index) const {
  return static_cast< ::video_games::Type >(type_.Get(index));
}
inline ::video_games::Type VideoGame::type(int index) const {
  // @@protoc_insertion_point(field_get:video_games.VideoGame.type)
  return _internal_type(index);
}
inline void VideoGame::set_type(int index, ::video_games::Type value) {
  type_.Set(index, value);
  // @@protoc_insertion_point(field_set:video_games.VideoGame.type)
}
inline void VideoGame::_internal_add_type(::video_games::Type value) {
  type_.Add(value);
}
inline void VideoGame::add_type(::video_games::Type value) {
  // @@protoc_insertion_point(field_add:video_games.VideoGame.type)
  _internal_add_type(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
VideoGame::type() const {
  // @@protoc_insertion_point(field_list:video_games.VideoGame.type)
  return type_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
VideoGame::_internal_mutable_type() {
  return &type_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
VideoGame::mutable_type() {
  // @@protoc_insertion_point(field_mutable_list:video_games.VideoGame.type)
  return _internal_mutable_type();
}

// .utils.Date library_add_date = 3;
inline bool VideoGame::_internal_has_library_add_date() const {
  return this != internal_default_instance() && library_add_date_ != nullptr;
}
inline bool VideoGame::has_library_add_date() const {
  return _internal_has_library_add_date();
}
inline const ::utils::Date& VideoGame::_internal_library_add_date() const {
  const ::utils::Date* p = library_add_date_;
  return p != nullptr ? *p : *reinterpret_cast<const ::utils::Date*>(
      &::utils::_Date_default_instance_);
}
inline const ::utils::Date& VideoGame::library_add_date() const {
  // @@protoc_insertion_point(field_get:video_games.VideoGame.library_add_date)
  return _internal_library_add_date();
}
inline void VideoGame::unsafe_arena_set_allocated_library_add_date(
    ::utils::Date* library_add_date) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(library_add_date_);
  }
  library_add_date_ = library_add_date;
  if (library_add_date) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:video_games.VideoGame.library_add_date)
}
inline ::utils::Date* VideoGame::release_library_add_date() {
  auto temp = unsafe_arena_release_library_add_date();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::utils::Date* VideoGame::unsafe_arena_release_library_add_date() {
  // @@protoc_insertion_point(field_release:video_games.VideoGame.library_add_date)
  
  ::utils::Date* temp = library_add_date_;
  library_add_date_ = nullptr;
  return temp;
}
inline ::utils::Date* VideoGame::_internal_mutable_library_add_date() {
  
  if (library_add_date_ == nullptr) {
    auto* p = CreateMaybeMessage<::utils::Date>(GetArena());
    library_add_date_ = p;
  }
  return library_add_date_;
}
inline ::utils::Date* VideoGame::mutable_library_add_date() {
  // @@protoc_insertion_point(field_mutable:video_games.VideoGame.library_add_date)
  return _internal_mutable_library_add_date();
}
inline void VideoGame::set_allocated_library_add_date(::utils::Date* library_add_date) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(library_add_date_);
  }
  if (library_add_date) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(library_add_date)->GetArena();
    if (message_arena != submessage_arena) {
      library_add_date = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, library_add_date, submessage_arena);
    }
    
  } else {
    
  }
  library_add_date_ = library_add_date;
  // @@protoc_insertion_point(field_set_allocated:video_games.VideoGame.library_add_date)
}

// repeated .video_games.Game games = 4;
inline int VideoGame::_internal_games_size() const {
  return games_.size();
}
inline int VideoGame::games_size() const {
  return _internal_games_size();
}
inline void VideoGame::clear_games() {
  games_.Clear();
}
inline ::video_games::Game* VideoGame::mutable_games(int index) {
  // @@protoc_insertion_point(field_mutable:video_games.VideoGame.games)
  return games_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::video_games::Game >*
VideoGame::mutable_games() {
  // @@protoc_insertion_point(field_mutable_list:video_games.VideoGame.games)
  return &games_;
}
inline const ::video_games::Game& VideoGame::_internal_games(int index) const {
  return games_.Get(index);
}
inline const ::video_games::Game& VideoGame::games(int index) const {
  // @@protoc_insertion_point(field_get:video_games.VideoGame.games)
  return _internal_games(index);
}
inline ::video_games::Game* VideoGame::_internal_add_games() {
  return games_.Add();
}
inline ::video_games::Game* VideoGame::add_games() {
  // @@protoc_insertion_point(field_add:video_games.VideoGame.games)
  return _internal_add_games();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::video_games::Game >&
VideoGame::games() const {
  // @@protoc_insertion_point(field_list:video_games.VideoGame.games)
  return games_;
}

// bool favorite = 5;
inline void VideoGame::clear_favorite() {
  favorite_ = false;
}
inline bool VideoGame::_internal_favorite() const {
  return favorite_;
}
inline bool VideoGame::favorite() const {
  // @@protoc_insertion_point(field_get:video_games.VideoGame.favorite)
  return _internal_favorite();
}
inline void VideoGame::_internal_set_favorite(bool value) {
  
  favorite_ = value;
}
inline void VideoGame::set_favorite(bool value) {
  _internal_set_favorite(value);
  // @@protoc_insertion_point(field_set:video_games.VideoGame.favorite)
}

// -------------------------------------------------------------------

// Library

// repeated .video_games.VideoGame list = 1;
inline int Library::_internal_list_size() const {
  return list_.size();
}
inline int Library::list_size() const {
  return _internal_list_size();
}
inline void Library::clear_list() {
  list_.Clear();
}
inline ::video_games::VideoGame* Library::mutable_list(int index) {
  // @@protoc_insertion_point(field_mutable:video_games.Library.list)
  return list_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::video_games::VideoGame >*
Library::mutable_list() {
  // @@protoc_insertion_point(field_mutable_list:video_games.Library.list)
  return &list_;
}
inline const ::video_games::VideoGame& Library::_internal_list(int index) const {
  return list_.Get(index);
}
inline const ::video_games::VideoGame& Library::list(int index) const {
  // @@protoc_insertion_point(field_get:video_games.Library.list)
  return _internal_list(index);
}
inline ::video_games::VideoGame* Library::_internal_add_list() {
  return list_.Add();
}
inline ::video_games::VideoGame* Library::add_list() {
  // @@protoc_insertion_point(field_add:video_games.Library.list)
  return _internal_add_list();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::video_games::VideoGame >&
Library::list() const {
  // @@protoc_insertion_point(field_list:video_games.Library.list)
  return list_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace video_games

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::video_games::Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::video_games::Type>() {
  return ::video_games::Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fvideo_5fgames_2eproto