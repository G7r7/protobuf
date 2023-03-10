// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/video_games.proto

#include "proto/video_games.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_proto_2futils_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Date_proto_2futils_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2fvideo_5fgames_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Game_proto_2fvideo_5fgames_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2fvideo_5fgames_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_VideoGame_proto_2fvideo_5fgames_2eproto;
namespace video_games {
class GameDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Game> _instance;
} _Game_default_instance_;
class VideoGameDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VideoGame> _instance;
} _VideoGame_default_instance_;
class LibraryDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Library> _instance;
} _Library_default_instance_;
}  // namespace video_games
static void InitDefaultsscc_info_Game_proto_2fvideo_5fgames_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::video_games::_Game_default_instance_;
    new (ptr) ::video_games::Game();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::video_games::Game::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Game_proto_2fvideo_5fgames_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Game_proto_2fvideo_5fgames_2eproto}, {
      &scc_info_Date_proto_2futils_2eproto.base,}};

static void InitDefaultsscc_info_Library_proto_2fvideo_5fgames_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::video_games::_Library_default_instance_;
    new (ptr) ::video_games::Library();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::video_games::Library::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Library_proto_2fvideo_5fgames_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Library_proto_2fvideo_5fgames_2eproto}, {
      &scc_info_VideoGame_proto_2fvideo_5fgames_2eproto.base,}};

static void InitDefaultsscc_info_VideoGame_proto_2fvideo_5fgames_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::video_games::_VideoGame_default_instance_;
    new (ptr) ::video_games::VideoGame();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::video_games::VideoGame::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_VideoGame_proto_2fvideo_5fgames_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_VideoGame_proto_2fvideo_5fgames_2eproto}, {
      &scc_info_Date_proto_2futils_2eproto.base,
      &scc_info_Game_proto_2fvideo_5fgames_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fvideo_5fgames_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_proto_2fvideo_5fgames_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fvideo_5fgames_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fvideo_5fgames_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::video_games::Game, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::video_games::Game, date_),
  PROTOBUF_FIELD_OFFSET(::video_games::Game, duration_minutes_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::video_games::VideoGame, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::video_games::VideoGame, title_),
  PROTOBUF_FIELD_OFFSET(::video_games::VideoGame, type_),
  PROTOBUF_FIELD_OFFSET(::video_games::VideoGame, library_add_date_),
  PROTOBUF_FIELD_OFFSET(::video_games::VideoGame, games_),
  PROTOBUF_FIELD_OFFSET(::video_games::VideoGame, favorite_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::video_games::Library, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::video_games::Library, list_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::video_games::Game)},
  { 7, -1, sizeof(::video_games::VideoGame)},
  { 17, -1, sizeof(::video_games::Library)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::video_games::_Game_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::video_games::_VideoGame_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::video_games::_Library_default_instance_),
};

const char descriptor_table_protodef_proto_2fvideo_5fgames_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027proto/video_games.proto\022\013video_games\032\021"
  "proto/utils.proto\";\n\004Game\022\031\n\004date\030\001 \001(\0132"
  "\013.utils.Date\022\030\n\020duration_minutes\030\002 \001(\r\"\226"
  "\001\n\tVideoGame\022\r\n\005title\030\001 \001(\t\022\037\n\004type\030\002 \003("
  "\0162\021.video_games.Type\022%\n\020library_add_date"
  "\030\003 \001(\0132\013.utils.Date\022 \n\005games\030\004 \003(\0132\021.vid"
  "eo_games.Game\022\020\n\010favorite\030\005 \001(\010\"/\n\007Libra"
  "ry\022$\n\004list\030\001 \003(\0132\026.video_games.VideoGame"
  "*.\n\004Type\022\013\n\007GENERIC\020\000\022\n\n\006SPORTS\020\001\022\r\n\tADV"
  "ENTURE\020\002B\033Z\031main/messages/video_gamesb\006p"
  "roto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fvideo_5fgames_2eproto_deps[1] = {
  &::descriptor_table_proto_2futils_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fvideo_5fgames_2eproto_sccs[3] = {
  &scc_info_Game_proto_2fvideo_5fgames_2eproto.base,
  &scc_info_Library_proto_2fvideo_5fgames_2eproto.base,
  &scc_info_VideoGame_proto_2fvideo_5fgames_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fvideo_5fgames_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fvideo_5fgames_2eproto = {
  false, false, descriptor_table_protodef_proto_2fvideo_5fgames_2eproto, "proto/video_games.proto", 405,
  &descriptor_table_proto_2fvideo_5fgames_2eproto_once, descriptor_table_proto_2fvideo_5fgames_2eproto_sccs, descriptor_table_proto_2fvideo_5fgames_2eproto_deps, 3, 1,
  schemas, file_default_instances, TableStruct_proto_2fvideo_5fgames_2eproto::offsets,
  file_level_metadata_proto_2fvideo_5fgames_2eproto, 3, file_level_enum_descriptors_proto_2fvideo_5fgames_2eproto, file_level_service_descriptors_proto_2fvideo_5fgames_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fvideo_5fgames_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fvideo_5fgames_2eproto)), true);
namespace video_games {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_proto_2fvideo_5fgames_2eproto);
  return file_level_enum_descriptors_proto_2fvideo_5fgames_2eproto[0];
}
bool Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void Game::InitAsDefaultInstance() {
  ::video_games::_Game_default_instance_._instance.get_mutable()->date_ = const_cast< ::utils::Date*>(
      ::utils::Date::internal_default_instance());
}
class Game::_Internal {
 public:
  static const ::utils::Date& date(const Game* msg);
};

const ::utils::Date&
Game::_Internal::date(const Game* msg) {
  return *msg->date_;
}
void Game::clear_date() {
  if (GetArena() == nullptr && date_ != nullptr) {
    delete date_;
  }
  date_ = nullptr;
}
Game::Game(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:video_games.Game)
}
Game::Game(const Game& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_date()) {
    date_ = new ::utils::Date(*from.date_);
  } else {
    date_ = nullptr;
  }
  duration_minutes_ = from.duration_minutes_;
  // @@protoc_insertion_point(copy_constructor:video_games.Game)
}

void Game::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Game_proto_2fvideo_5fgames_2eproto.base);
  ::memset(&date_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&duration_minutes_) -
      reinterpret_cast<char*>(&date_)) + sizeof(duration_minutes_));
}

Game::~Game() {
  // @@protoc_insertion_point(destructor:video_games.Game)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Game::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete date_;
}

void Game::ArenaDtor(void* object) {
  Game* _this = reinterpret_cast< Game* >(object);
  (void)_this;
}
void Game::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Game::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Game& Game::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Game_proto_2fvideo_5fgames_2eproto.base);
  return *internal_default_instance();
}


void Game::Clear() {
// @@protoc_insertion_point(message_clear_start:video_games.Game)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && date_ != nullptr) {
    delete date_;
  }
  date_ = nullptr;
  duration_minutes_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Game::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .utils.Date date = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_date(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 duration_minutes = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          duration_minutes_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Game::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:video_games.Game)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .utils.Date date = 1;
  if (this->has_date()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::date(this), target, stream);
  }

  // uint32 duration_minutes = 2;
  if (this->duration_minutes() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_duration_minutes(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:video_games.Game)
  return target;
}

size_t Game::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:video_games.Game)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .utils.Date date = 1;
  if (this->has_date()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *date_);
  }

  // uint32 duration_minutes = 2;
  if (this->duration_minutes() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_duration_minutes());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Game::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:video_games.Game)
  GOOGLE_DCHECK_NE(&from, this);
  const Game* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Game>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:video_games.Game)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:video_games.Game)
    MergeFrom(*source);
  }
}

void Game::MergeFrom(const Game& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:video_games.Game)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_date()) {
    _internal_mutable_date()->::utils::Date::MergeFrom(from._internal_date());
  }
  if (from.duration_minutes() != 0) {
    _internal_set_duration_minutes(from._internal_duration_minutes());
  }
}

void Game::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:video_games.Game)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Game::CopyFrom(const Game& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:video_games.Game)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Game::IsInitialized() const {
  return true;
}

void Game::InternalSwap(Game* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Game, duration_minutes_)
      + sizeof(Game::duration_minutes_)
      - PROTOBUF_FIELD_OFFSET(Game, date_)>(
          reinterpret_cast<char*>(&date_),
          reinterpret_cast<char*>(&other->date_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Game::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void VideoGame::InitAsDefaultInstance() {
  ::video_games::_VideoGame_default_instance_._instance.get_mutable()->library_add_date_ = const_cast< ::utils::Date*>(
      ::utils::Date::internal_default_instance());
}
class VideoGame::_Internal {
 public:
  static const ::utils::Date& library_add_date(const VideoGame* msg);
};

const ::utils::Date&
VideoGame::_Internal::library_add_date(const VideoGame* msg) {
  return *msg->library_add_date_;
}
void VideoGame::clear_library_add_date() {
  if (GetArena() == nullptr && library_add_date_ != nullptr) {
    delete library_add_date_;
  }
  library_add_date_ = nullptr;
}
VideoGame::VideoGame(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  type_(arena),
  games_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:video_games.VideoGame)
}
VideoGame::VideoGame(const VideoGame& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      type_(from.type_),
      games_(from.games_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  title_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_title().empty()) {
    title_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_title(),
      GetArena());
  }
  if (from._internal_has_library_add_date()) {
    library_add_date_ = new ::utils::Date(*from.library_add_date_);
  } else {
    library_add_date_ = nullptr;
  }
  favorite_ = from.favorite_;
  // @@protoc_insertion_point(copy_constructor:video_games.VideoGame)
}

void VideoGame::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_VideoGame_proto_2fvideo_5fgames_2eproto.base);
  title_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&library_add_date_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&favorite_) -
      reinterpret_cast<char*>(&library_add_date_)) + sizeof(favorite_));
}

VideoGame::~VideoGame() {
  // @@protoc_insertion_point(destructor:video_games.VideoGame)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void VideoGame::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  title_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete library_add_date_;
}

void VideoGame::ArenaDtor(void* object) {
  VideoGame* _this = reinterpret_cast< VideoGame* >(object);
  (void)_this;
}
void VideoGame::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void VideoGame::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VideoGame& VideoGame::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VideoGame_proto_2fvideo_5fgames_2eproto.base);
  return *internal_default_instance();
}


void VideoGame::Clear() {
// @@protoc_insertion_point(message_clear_start:video_games.VideoGame)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  type_.Clear();
  games_.Clear();
  title_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && library_add_date_ != nullptr) {
    delete library_add_date_;
  }
  library_add_date_ = nullptr;
  favorite_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VideoGame::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string title = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_title();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "video_games.VideoGame.title"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .video_games.Type type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_type(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_add_type(static_cast<::video_games::Type>(val));
        } else goto handle_unusual;
        continue;
      // .utils.Date library_add_date = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_library_add_date(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .video_games.Game games = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_games(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // bool favorite = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          favorite_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* VideoGame::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:video_games.VideoGame)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string title = 1;
  if (this->title().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_title().data(), static_cast<int>(this->_internal_title().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "video_games.VideoGame.title");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_title(), target);
  }

  // repeated .video_games.Type type = 2;
  {
    int byte_size = _type_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          2, type_, byte_size, target);
    }
  }

  // .utils.Date library_add_date = 3;
  if (this->has_library_add_date()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::library_add_date(this), target, stream);
  }

  // repeated .video_games.Game games = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_games_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_games(i), target, stream);
  }

  // bool favorite = 5;
  if (this->favorite() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->_internal_favorite(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:video_games.VideoGame)
  return target;
}

size_t VideoGame::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:video_games.VideoGame)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .video_games.Type type = 2;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_type_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(
        this->_internal_type(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _type_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated .video_games.Game games = 4;
  total_size += 1UL * this->_internal_games_size();
  for (const auto& msg : this->games_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string title = 1;
  if (this->title().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_title());
  }

  // .utils.Date library_add_date = 3;
  if (this->has_library_add_date()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *library_add_date_);
  }

  // bool favorite = 5;
  if (this->favorite() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VideoGame::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:video_games.VideoGame)
  GOOGLE_DCHECK_NE(&from, this);
  const VideoGame* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VideoGame>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:video_games.VideoGame)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:video_games.VideoGame)
    MergeFrom(*source);
  }
}

void VideoGame::MergeFrom(const VideoGame& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:video_games.VideoGame)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  type_.MergeFrom(from.type_);
  games_.MergeFrom(from.games_);
  if (from.title().size() > 0) {
    _internal_set_title(from._internal_title());
  }
  if (from.has_library_add_date()) {
    _internal_mutable_library_add_date()->::utils::Date::MergeFrom(from._internal_library_add_date());
  }
  if (from.favorite() != 0) {
    _internal_set_favorite(from._internal_favorite());
  }
}

void VideoGame::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:video_games.VideoGame)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VideoGame::CopyFrom(const VideoGame& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:video_games.VideoGame)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VideoGame::IsInitialized() const {
  return true;
}

void VideoGame::InternalSwap(VideoGame* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  type_.InternalSwap(&other->type_);
  games_.InternalSwap(&other->games_);
  title_.Swap(&other->title_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(VideoGame, favorite_)
      + sizeof(VideoGame::favorite_)
      - PROTOBUF_FIELD_OFFSET(VideoGame, library_add_date_)>(
          reinterpret_cast<char*>(&library_add_date_),
          reinterpret_cast<char*>(&other->library_add_date_));
}

::PROTOBUF_NAMESPACE_ID::Metadata VideoGame::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Library::InitAsDefaultInstance() {
}
class Library::_Internal {
 public:
};

Library::Library(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  list_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:video_games.Library)
}
Library::Library(const Library& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      list_(from.list_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:video_games.Library)
}

void Library::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Library_proto_2fvideo_5fgames_2eproto.base);
}

Library::~Library() {
  // @@protoc_insertion_point(destructor:video_games.Library)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Library::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Library::ArenaDtor(void* object) {
  Library* _this = reinterpret_cast< Library* >(object);
  (void)_this;
}
void Library::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Library::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Library& Library::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Library_proto_2fvideo_5fgames_2eproto.base);
  return *internal_default_instance();
}


void Library::Clear() {
// @@protoc_insertion_point(message_clear_start:video_games.Library)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  list_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Library::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .video_games.VideoGame list = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_list(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Library::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:video_games.Library)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .video_games.VideoGame list = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_list_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_list(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:video_games.Library)
  return target;
}

size_t Library::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:video_games.Library)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .video_games.VideoGame list = 1;
  total_size += 1UL * this->_internal_list_size();
  for (const auto& msg : this->list_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Library::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:video_games.Library)
  GOOGLE_DCHECK_NE(&from, this);
  const Library* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Library>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:video_games.Library)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:video_games.Library)
    MergeFrom(*source);
  }
}

void Library::MergeFrom(const Library& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:video_games.Library)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  list_.MergeFrom(from.list_);
}

void Library::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:video_games.Library)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Library::CopyFrom(const Library& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:video_games.Library)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Library::IsInitialized() const {
  return true;
}

void Library::InternalSwap(Library* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  list_.InternalSwap(&other->list_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Library::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace video_games
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::video_games::Game* Arena::CreateMaybeMessage< ::video_games::Game >(Arena* arena) {
  return Arena::CreateMessageInternal< ::video_games::Game >(arena);
}
template<> PROTOBUF_NOINLINE ::video_games::VideoGame* Arena::CreateMaybeMessage< ::video_games::VideoGame >(Arena* arena) {
  return Arena::CreateMessageInternal< ::video_games::VideoGame >(arena);
}
template<> PROTOBUF_NOINLINE ::video_games::Library* Arena::CreateMaybeMessage< ::video_games::Library >(Arena* arena) {
  return Arena::CreateMessageInternal< ::video_games::Library >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
