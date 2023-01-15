// Copyright 2022 The Forgotten Server Authors. All rights reserved.
// Use of this source code is governed by the GPL-2.0 License that can be found in the LICENSE file.

#ifndef FS_ENUMS_H
#define FS_ENUMS_H

enum RuleViolationType_t : uint8_t {
	REPORT_TYPE_NAME = 0,
	REPORT_TYPE_STATEMENT = 1,
	REPORT_TYPE_BOT = 2
};

enum RuleViolationReasons_t : uint8_t {
	REPORT_REASON_NAMEINAPPROPRIATE = 0,
	REPORT_REASON_NAMEPOORFORMATTED = 1,
	REPORT_REASON_NAMEADVERTISING = 2,
	REPORT_REASON_NAMEUNFITTING = 3,
	REPORT_REASON_NAMERULEVIOLATION = 4,
	REPORT_REASON_INSULTINGSTATEMENT = 5,
	REPORT_REASON_SPAMMING = 6,
	REPORT_REASON_ADVERTISINGSTATEMENT = 7,
	REPORT_REASON_UNFITTINGSTATEMENT = 8,
	REPORT_REASON_LANGUAGESTATEMENT = 9,
	REPORT_REASON_DISCLOSURE = 10,
	REPORT_REASON_RULEVIOLATION = 11,
	REPORT_REASON_STATEMENT_BUGABUSE = 12,
	REPORT_REASON_UNOFFICIALSOFTWARE = 13,
	REPORT_REASON_PRETENDING = 14,
	REPORT_REASON_HARASSINGOWNERS = 15,
	REPORT_REASON_FALSEINFO = 16,
	REPORT_REASON_ACCOUNTSHARING = 17,
	REPORT_REASON_STEALINGDATA = 18,
	REPORT_REASON_SERVICEATTACKING = 19,
	REPORT_REASON_SERVICEAGREEMENT = 20
};

enum BugReportType_t : uint8_t {
	BUG_CATEGORY_MAP = 0,
	BUG_CATEGORY_TYPO = 1,
	BUG_CATEGORY_TECHNICAL = 2,
	BUG_CATEGORY_OTHER = 3
};

enum ThreadState {
	THREAD_STATE_RUNNING,
	THREAD_STATE_CLOSING,
	THREAD_STATE_TERMINATED,
};

enum itemAttrTypes : uint32_t {
	ITEM_ATTRIBUTE_NONE,

	ITEM_ATTRIBUTE_ACTIONID = 1 << 0,
	ITEM_ATTRIBUTE_UNIQUEID = 1 << 1,
	ITEM_ATTRIBUTE_DESCRIPTION = 1 << 2,
	ITEM_ATTRIBUTE_TEXT = 1 << 3,
	ITEM_ATTRIBUTE_DATE = 1 << 4,
	ITEM_ATTRIBUTE_WRITER = 1 << 5,
	ITEM_ATTRIBUTE_NAME = 1 << 6,
	ITEM_ATTRIBUTE_ARTICLE = 1 << 7,
	ITEM_ATTRIBUTE_PLURALNAME = 1 << 8,
	ITEM_ATTRIBUTE_WEIGHT = 1 << 9,
	ITEM_ATTRIBUTE_ATTACK = 1 << 10,
	ITEM_ATTRIBUTE_DEFENSE = 1 << 11,
	ITEM_ATTRIBUTE_EXTRADEFENSE = 1 << 12,
	ITEM_ATTRIBUTE_ARMOR = 1 << 13,
	ITEM_ATTRIBUTE_HITCHANCE = 1 << 14,
	ITEM_ATTRIBUTE_SHOOTRANGE = 1 << 15,
	ITEM_ATTRIBUTE_OWNER = 1 << 16,
	ITEM_ATTRIBUTE_DURATION = 1 << 17,
	//ITEM_ATTRIBUTE_DECAYSTATE = 1 << 18, // deprecated
	ITEM_ATTRIBUTE_CORPSEOWNER = 1 << 19,
	ITEM_ATTRIBUTE_CHARGES = 1 << 20,
	ITEM_ATTRIBUTE_FLUIDTYPE = 1 << 21,
	ITEM_ATTRIBUTE_DOORID = 1 << 22,
	ITEM_ATTRIBUTE_DECAYTO = 1 << 23,
	ITEM_ATTRIBUTE_WRAPID = 1 << 24,
	ITEM_ATTRIBUTE_STOREITEM = 1 << 25,
	ITEM_ATTRIBUTE_ATTACK_SPEED = 1 << 26,
	ITEM_ATTRIBUTE_OPENCONTAINER = 1 << 27,
	ITEM_ATTRIBUTE_TIER = 1 << 28,
	ITEM_ATTRIBUTE_DECAY_TIMESTAMP = 1 << 29,

	ITEM_ATTRIBUTE_CUSTOM = 1U << 31
};

enum ItemDecayType_t : uint8_t {
	DECAY_TYPE_NORMAL = 0,
	DECAY_TYPE_TIMESTAMP = 1,
};

enum VipStatus_t : uint8_t {
	VIPSTATUS_OFFLINE = 0,
	VIPSTATUS_ONLINE = 1,
	VIPSTATUS_PENDING = 2,
	VIPSTATUS_TRAINING = 3,
};

enum MarketAction_t {
	MARKETACTION_BUY = 0,
	MARKETACTION_SELL = 1,
};

enum MarketRequest_t {
	MARKETREQUEST_OWN_HISTORY = 1,
	MARKETREQUEST_OWN_OFFERS = 2,
	MARKETREQUEST_ITEM = 3,
};

enum MarketOfferState_t {
	OFFERSTATE_ACTIVE = 0,
	OFFERSTATE_CANCELLED = 1,
	OFFERSTATE_EXPIRED = 2,
	OFFERSTATE_ACCEPTED = 3,

	OFFERSTATE_ACCEPTEDEX = 255,
};

enum ChannelEvent_t : uint8_t {
	CHANNELEVENT_JOIN = 0,
	CHANNELEVENT_LEAVE = 1,
	CHANNELEVENT_INVITE = 2,
	CHANNELEVENT_EXCLUDE = 3,
};

enum CreatureType_t : uint8_t {
	CREATURETYPE_PLAYER = 0,
	CREATURETYPE_MONSTER = 1,
	CREATURETYPE_NPC = 2,
	CREATURETYPE_SUMMON_OWN = 3,
	CREATURETYPE_SUMMON_OTHERS = 4,
	CREATURETYPE_HIDDEN = 5,
};

enum CreatureDisplayModes_t : uint8_t {
	CREATURE_DISPLAY_MODE_NONE = 0,
	CREATURE_DISPLAY_MODE_PLAYER = 1,
	CREATURE_DISPLAY_MODE_MONSTER = 2,
	CREATURE_DISPLAY_MODE_NPC = 3,
	CREATURE_DISPLAY_MODE_SUMMON = 4,
	CREATURE_DISPLAY_MODE_SUMMON_OTHER = 5,
	CREATURE_DISPLAY_MODE_HIDDEN = 6,

	CREATURE_DISPLAY_MODE_LAST = CREATURE_DISPLAY_MODE_HIDDEN
};

enum OperatingSystem_t : uint8_t {
	CLIENTOS_NONE = 0,

	CLIENTOS_LINUX = 1,
	CLIENTOS_WINDOWS = 2,
	CLIENTOS_FLASH = 3,
	CLIENTOS_QT_LINUX = 4,
	CLIENTOS_QT_WINDOWS = 5,
	CLIENTOS_QT_MAC = 6,
	CLIENTOS_QT_LINUX2 = 7,

	CLIENTOS_OTCLIENT_LINUX = 10,
	CLIENTOS_OTCLIENT_WINDOWS = 11,
	CLIENTOS_OTCLIENT_MAC = 12,
};

enum SpellGroup_t : uint8_t {
	SPELLGROUP_NONE = 0,
	SPELLGROUP_ATTACK = 1,
	SPELLGROUP_HEALING = 2,
	SPELLGROUP_SUPPORT = 3,
	SPELLGROUP_SPECIAL = 4,
	SPELLGROUP_CONJURE = 5,
	SPELLGROUP_CRIPPLING = 6,
	SPELLGROUP_FOCUS = 7,
	SPELLGROUP_ULTIMATE = 8,
};

enum SpellType_t : uint8_t {
	SPELL_UNDEFINED = 0,
	SPELL_INSTANT = 1,
	SPELL_RUNE = 2,
};

enum AccountType_t : uint8_t {
	ACCOUNT_TYPE_NORMAL = 1,
	ACCOUNT_TYPE_TUTOR = 2,
	ACCOUNT_TYPE_SENIORTUTOR = 3,
	ACCOUNT_TYPE_GAMEMASTER = 4,
	ACCOUNT_TYPE_COMMUNITYMANAGER = 5,
	ACCOUNT_TYPE_GOD = 6
};

enum RaceType_t : uint8_t {
	RACE_NONE,
	RACE_VENOM,
	RACE_BLOOD,
	RACE_UNDEAD,
	RACE_FIRE,
	RACE_ENERGY,
	RACE_INK,
};

enum CombatType_t : uint16_t {
	COMBAT_NONE = 0,

	COMBAT_PHYSICALDAMAGE = 1 << 0,
	COMBAT_ENERGYDAMAGE = 1 << 1,
	COMBAT_EARTHDAMAGE = 1 << 2,
	COMBAT_FIREDAMAGE = 1 << 3,
	COMBAT_REFLECTDAMAGE = 1 << 4,
	COMBAT_LIFEDRAIN = 1 << 5,
	COMBAT_MANADRAIN = 1 << 6,
	COMBAT_HEALING = 1 << 7,
	COMBAT_DROWNDAMAGE = 1 << 8,
	COMBAT_ICEDAMAGE = 1 << 9,
	COMBAT_HOLYDAMAGE = 1 << 10,
	COMBAT_DEATHDAMAGE = 1 << 11,

	COMBAT_COUNT = 12
};

enum CombatParam_t {
	COMBAT_PARAM_TYPE,
	COMBAT_PARAM_EFFECT,
	COMBAT_PARAM_DISTANCEEFFECT,
	COMBAT_PARAM_BLOCKSHIELD,
	COMBAT_PARAM_BLOCKARMOR,
	COMBAT_PARAM_TARGETCASTERORTOPMOST,
	COMBAT_PARAM_CREATEITEM,
	COMBAT_PARAM_AGGRESSIVE,
	COMBAT_PARAM_DISPEL,
	COMBAT_PARAM_USECHARGES,
};

enum CallBackParam_t {
	CALLBACK_PARAM_LEVELMAGICVALUE,
	CALLBACK_PARAM_SKILLVALUE,
	CALLBACK_PARAM_TARGETTILE,
	CALLBACK_PARAM_TARGETCREATURE,
};

enum ConditionParam_t {
	CONDITION_PARAM_NONE,
	CONDITION_PARAM_OWNER,
	CONDITION_PARAM_TICKS,
	// CONDITION_PARAM_OUTFIT,
	CONDITION_PARAM_HEALTHGAIN,
	CONDITION_PARAM_HEALTHTICKS,
	CONDITION_PARAM_MANAGAIN,
	CONDITION_PARAM_MANATICKS,
	CONDITION_PARAM_DELAYED,
	CONDITION_PARAM_SPEED,
	CONDITION_PARAM_LIGHT_LEVEL,
	CONDITION_PARAM_LIGHT_COLOR,
	CONDITION_PARAM_SOULGAIN,
	CONDITION_PARAM_SOULTICKS,
	CONDITION_PARAM_MINVALUE,
	CONDITION_PARAM_MAXVALUE,
	CONDITION_PARAM_STARTVALUE,
	CONDITION_PARAM_TICKINTERVAL,
	CONDITION_PARAM_FORCEUPDATE,
	CONDITION_PARAM_SKILL_MELEE,
	CONDITION_PARAM_SKILL_FIST,
	CONDITION_PARAM_SKILL_CLUB,
	CONDITION_PARAM_SKILL_SWORD,
	CONDITION_PARAM_SKILL_AXE,
	CONDITION_PARAM_SKILL_DISTANCE,
	CONDITION_PARAM_SKILL_SHIELD,
	CONDITION_PARAM_SKILL_FISHING,
	CONDITION_PARAM_STAT_MAXHITPOINTS,
	CONDITION_PARAM_STAT_MAXMANAPOINTS,
	// CONDITION_PARAM_STAT_SOULPOINTS,
	CONDITION_PARAM_STAT_MAGICPOINTS,
	CONDITION_PARAM_STAT_MAXHITPOINTSPERCENT,
	CONDITION_PARAM_STAT_MAXMANAPOINTSPERCENT,
	// CONDITION_PARAM_STAT_SOULPOINTSPERCENT,
	CONDITION_PARAM_STAT_MAGICPOINTSPERCENT,
	CONDITION_PARAM_STAT_CAPACITY,
	CONDITION_PARAM_STAT_CAPACITYPERCENT,
	CONDITION_PARAM_STAT_VIBRANCY,
	CONDITION_PARAM_PERIODICDAMAGE,
	CONDITION_PARAM_SKILL_MELEEPERCENT,
	CONDITION_PARAM_SKILL_FISTPERCENT,
	CONDITION_PARAM_SKILL_CLUBPERCENT,
	CONDITION_PARAM_SKILL_SWORDPERCENT,
	CONDITION_PARAM_SKILL_AXEPERCENT,
	CONDITION_PARAM_SKILL_DISTANCEPERCENT,
	CONDITION_PARAM_SKILL_SHIELDPERCENT,
	CONDITION_PARAM_SKILL_FISHINGPERCENT,
	CONDITION_PARAM_BUFF_SPELL,
	CONDITION_PARAM_SUBID,
	CONDITION_PARAM_FIELD,
	CONDITION_PARAM_DISABLE_DEFENSE,
	CONDITION_PARAM_SPECIALSKILL_CRITICALHITCHANCE,
	CONDITION_PARAM_SPECIALSKILL_CRITICALHITAMOUNT,
	CONDITION_PARAM_SPECIALSKILL_LIFELEECHCHANCE,
	CONDITION_PARAM_SPECIALSKILL_LIFELEECHAMOUNT,
	CONDITION_PARAM_SPECIALSKILL_MANALEECHCHANCE,
	CONDITION_PARAM_SPECIALSKILL_MANALEECHAMOUNT,
	CONDITION_PARAM_AGGRESSIVE,
	CONDITION_PARAM_DRUNKENNESS,
	CONDITION_PARAM_SPECIALSKILL_ONSLAUGHT,
	CONDITION_PARAM_SPECIALSKILL_RUSE,
	CONDITION_PARAM_SPECIALSKILL_MOMENTUM,
	CONDITION_PARAM_ICONS,
};

enum BlockType_t : uint8_t {
	BLOCK_NONE,
	BLOCK_DEFENSE,
	BLOCK_ARMOR,
	BLOCK_IMMUNITY,
	BLOCK_DODGE
};

enum skills_t : uint8_t {
	SKILL_FIST = 0,
	SKILL_CLUB = 1,
	SKILL_SWORD = 2,
	SKILL_AXE = 3,
	SKILL_DISTANCE = 4,
	SKILL_SHIELD = 5,
	SKILL_FISHING = 6,

	SKILL_MAGLEVEL = 7,
	SKILL_LEVEL = 8,

	SKILL_FIRST = SKILL_FIST,
	SKILL_LAST = SKILL_FISHING
};

enum stats_t {
	STAT_MAXHITPOINTS,
	STAT_MAXMANAPOINTS,
	STAT_SOULPOINTS, // unused
	STAT_MAGICPOINTS,
	STAT_CAPACITY,
	STAT_VIBRANCY,

	STAT_FIRST = STAT_MAXHITPOINTS,
	STAT_LAST = STAT_VIBRANCY
};

enum SpecialSkills_t {
	SPECIALSKILL_CRITICALHITCHANCE,
	SPECIALSKILL_CRITICALHITAMOUNT,
	SPECIALSKILL_LIFELEECHCHANCE,
	SPECIALSKILL_LIFELEECHAMOUNT,
	SPECIALSKILL_MANALEECHCHANCE,
	SPECIALSKILL_MANALEECHAMOUNT,
	SPECIALSKILL_ONSLAUGHT,
	SPECIALSKILL_RUSE,
	SPECIALSKILL_MOMENTUM,

	SPECIALSKILL_FIRST = SPECIALSKILL_CRITICALHITCHANCE,
	SPECIALSKILL_LAST = SPECIALSKILL_MOMENTUM,
	SPECIALSKILL_LEECH_FIRST = SPECIALSKILL_CRITICALHITCHANCE,
	SPECIALSKILL_LEECH_LAST = SPECIALSKILL_MANALEECHAMOUNT,
	SPECIALSKILL_FORGE_FIRST = SPECIALSKILL_ONSLAUGHT,
	SPECIALSKILL_FORGE_LAST = SPECIALSKILL_MOMENTUM,
};

enum formulaType_t {
	COMBAT_FORMULA_UNDEFINED,
	COMBAT_FORMULA_LEVELMAGIC,
	COMBAT_FORMULA_SKILL,
	COMBAT_FORMULA_DAMAGE,
};

enum ConditionType_t {
	CONDITION_NONE,

	CONDITION_POISON = 1 << 0,
	CONDITION_FIRE = 1 << 1,
	CONDITION_ENERGY = 1 << 2,
	CONDITION_BLEEDING = 1 << 3,
	CONDITION_HASTE = 1 << 4,
	CONDITION_PARALYZE = 1 << 5,
	CONDITION_OUTFIT = 1 << 6,
	CONDITION_INVISIBLE = 1 << 7,
	CONDITION_LIGHT = 1 << 8,
	CONDITION_MANASHIELD = 1 << 9,
	CONDITION_INFIGHT = 1 << 10,
	CONDITION_DRUNK = 1 << 11,
	CONDITION_EXHAUST_WEAPON = 1 << 12, // unused
	CONDITION_REGENERATION = 1 << 13,
	CONDITION_SOUL = 1 << 14,
	CONDITION_DROWN = 1 << 15,
	CONDITION_MUTED = 1 << 16,
	CONDITION_CHANNELMUTEDTICKS = 1 << 17,
	CONDITION_YELLTICKS = 1 << 18,
	CONDITION_ATTRIBUTES = 1 << 19,
	CONDITION_FREEZING = 1 << 20,
	CONDITION_DAZZLED = 1 << 21,
	CONDITION_CURSED = 1 << 22,
	CONDITION_EXHAUST_COMBAT = 1 << 23, // unused
	CONDITION_EXHAUST_HEAL = 1 << 24, // unused
	CONDITION_PACIFIED = 1 << 25,
	CONDITION_SPELLCOOLDOWN = 1 << 26,
	CONDITION_SPELLGROUPCOOLDOWN = 1 << 27,
};

enum ConditionId_t : int8_t {
	CONDITIONID_DEFAULT = -1,
	CONDITIONID_COMBAT,
	CONDITIONID_HEAD,
	CONDITIONID_NECKLACE,
	CONDITIONID_BACKPACK,
	CONDITIONID_ARMOR,
	CONDITIONID_RIGHT,
	CONDITIONID_LEFT,
	CONDITIONID_LEGS,
	CONDITIONID_FEET,
	CONDITIONID_RING,
	CONDITIONID_AMMO,
};

enum PlayerSex_t : uint8_t {
	PLAYERSEX_FEMALE = 0,
	PLAYERSEX_MALE = 1,

	PLAYERSEX_LAST = PLAYERSEX_MALE
};

enum Vocation_t : uint16_t {
	VOCATION_NONE = 0
};

enum ReturnValue {
	RETURNVALUE_NOERROR,
	RETURNVALUE_NOTPOSSIBLE,
	RETURNVALUE_NOTENOUGHROOM,
	RETURNVALUE_PLAYERISPZLOCKED,
	RETURNVALUE_PLAYERISNOTINVITED,
	RETURNVALUE_CANNOTTHROW,
	RETURNVALUE_THEREISNOWAY,
	RETURNVALUE_DESTINATIONOUTOFREACH,
	RETURNVALUE_CREATUREBLOCK,
	RETURNVALUE_NOTMOVEABLE,
	RETURNVALUE_DROPTWOHANDEDITEM,
	RETURNVALUE_BOTHHANDSNEEDTOBEFREE,
	RETURNVALUE_CANONLYUSEONEWEAPON,
	RETURNVALUE_NEEDEXCHANGE,
	RETURNVALUE_CANNOTBEDRESSED,
	RETURNVALUE_PUTTHISOBJECTINYOURHAND,
	RETURNVALUE_PUTTHISOBJECTINBOTHHANDS,
	RETURNVALUE_TOOFARAWAY,
	RETURNVALUE_FIRSTGODOWNSTAIRS,
	RETURNVALUE_FIRSTGOUPSTAIRS,
	RETURNVALUE_CONTAINERNOTENOUGHROOM,
	RETURNVALUE_NOTENOUGHCAPACITY,
	RETURNVALUE_CANNOTPICKUP,
	RETURNVALUE_THISISIMPOSSIBLE,
	RETURNVALUE_DEPOTISFULL,
	RETURNVALUE_CREATUREDOESNOTEXIST,
	RETURNVALUE_CANNOTUSETHISOBJECT,
	RETURNVALUE_PLAYERWITHTHISNAMEISNOTONLINE,
	RETURNVALUE_NOTREQUIREDLEVELTOUSERUNE,
	RETURNVALUE_YOUAREALREADYTRADING,
	RETURNVALUE_THISPLAYERISALREADYTRADING,
	RETURNVALUE_YOUMAYNOTLOGOUTDURINGAFIGHT,
	RETURNVALUE_DIRECTPLAYERSHOOT,
	RETURNVALUE_NOTENOUGHLEVEL,
	RETURNVALUE_NOTENOUGHMAGICLEVEL,
	RETURNVALUE_NOTENOUGHMANA,
	RETURNVALUE_NOTENOUGHSOUL,
	RETURNVALUE_YOUAREEXHAUSTED,
	RETURNVALUE_YOUCANNOTUSEOBJECTSTHATFAST,
	RETURNVALUE_PLAYERISNOTREACHABLE,
	RETURNVALUE_CANONLYUSETHISRUNEONCREATURES,
	RETURNVALUE_ACTIONNOTPERMITTEDINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKTHISPLAYER,
	RETURNVALUE_YOUMAYNOTATTACKAPERSONINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKAPERSONWHILEINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKTHISCREATURE,
	RETURNVALUE_YOUCANONLYUSEITONCREATURES,
	RETURNVALUE_CREATUREISNOTREACHABLE,
	RETURNVALUE_TURNSECUREMODETOATTACKUNMARKEDPLAYERS,
	RETURNVALUE_YOUNEEDPREMIUMACCOUNT,
	RETURNVALUE_YOUNEEDTOLEARNTHISSPELL,
	RETURNVALUE_YOURVOCATIONCANNOTUSETHISSPELL,
	RETURNVALUE_YOUNEEDAWEAPONTOUSETHISSPELL,
	RETURNVALUE_PLAYERISPZLOCKEDLEAVEPVPZONE,
	RETURNVALUE_PLAYERISPZLOCKEDENTERPVPZONE,
	RETURNVALUE_ACTIONNOTPERMITTEDINANOPVPZONE,
	RETURNVALUE_YOUCANNOTLOGOUTHERE,
	RETURNVALUE_YOUNEEDAMAGICITEMTOCASTSPELL,
	RETURNVALUE_CANNOTCONJUREITEMHERE,
	RETURNVALUE_YOUNEEDTOSPLITYOURSPEARS,
	RETURNVALUE_NAMEISTOOAMBIGUOUS,
	RETURNVALUE_CANONLYUSEONESHIELD,
	RETURNVALUE_NOPARTYMEMBERSINRANGE,
	RETURNVALUE_YOUARENOTTHEOWNER,
	RETURNVALUE_NOSUCHRAIDEXISTS,
	RETURNVALUE_ANOTHERRAIDISALREADYEXECUTING,
	RETURNVALUE_TRADEPLAYERFARAWAY,
	RETURNVALUE_YOUDONTOWNTHISHOUSE,
	RETURNVALUE_TRADEPLAYERALREADYOWNSAHOUSE,
	RETURNVALUE_TRADEPLAYERHIGHESTBIDDER,
	RETURNVALUE_YOUCANNOTTRADETHISHOUSE,
	RETURNVALUE_YOUDONTHAVEREQUIREDPROFESSION,
	RETURNVALUE_CANNOTMOVEITEMISNOTSTOREITEM,
	RETURNVALUE_ITEMCANNOTBEMOVEDTHERE,
	RETURNVALUE_YOUCANNOTUSETHISBED,
	RETURNVALUE_YOUCANONLYUNWRAPINOWNHOUSE,
	RETURNVALUE_QUIVERAMMOONLY,
	RETURNVALUE_SCRIPT,
};

enum SpeechBubble_t
{
	SPEECHBUBBLE_NONE = 0,
	SPEECHBUBBLE_NORMAL = 1,
	SPEECHBUBBLE_TRADE = 2,
	SPEECHBUBBLE_QUEST = 3,
	SPEECHBUBBLE_COMPASS = 4,
	SPEECHBUBBLE_NORMAL2 = 5,
	SPEECHBUBBLE_NORMAL3 = 6,
	SPEECHBUBBLE_HIRELING = 7,

	SPEECHBUBBLE_LAST = SPEECHBUBBLE_HIRELING
};

enum MapMark_t
{
	MAPMARK_TICK = 0,
	MAPMARK_QUESTION = 1,
	MAPMARK_EXCLAMATION = 2,
	MAPMARK_STAR = 3,
	MAPMARK_CROSS = 4,
	MAPMARK_TEMPLE = 5,
	MAPMARK_KISS = 6,
	MAPMARK_SHOVEL = 7,
	MAPMARK_SWORD = 8,
	MAPMARK_FLAG = 9,
	MAPMARK_LOCK = 10,
	MAPMARK_BAG = 11,
	MAPMARK_SKULL = 12,
	MAPMARK_DOLLAR = 13,
	MAPMARK_REDNORTH = 14,
	MAPMARK_REDSOUTH = 15,
	MAPMARK_REDEAST = 16,
	MAPMARK_REDWEST = 17,
	MAPMARK_GREENNORTH = 18,
	MAPMARK_GREENSOUTH = 19,
};

enum OutfitTooltip_t : uint8_t {
	OUTFIT_TOOLTIP_NONE = 0,
	OUTFIT_TOOLTIP_STORE = 1,
	OUTFIT_TOOLTIP_GOLDEN = 2,
	OUTFIT_TOOLTIP_ROYAL = 3
};

struct Outfit_t {
	uint16_t lookType = 0;
	uint16_t lookTypeEx = 0;
	uint8_t lookHead = 0;
	uint8_t lookBody = 0;
	uint8_t lookLegs = 0;
	uint8_t lookFeet = 0;
	uint8_t lookAddons = 0;
	uint16_t lookMount = 0;
	uint8_t lookMountHead = 0;
	uint8_t lookMountBody = 0;
	uint8_t lookMountLegs = 0;
	uint8_t lookMountFeet = 0;
};

struct StaticImbuement_t {
	const std::string name;
	uint8_t slotId = 0;
	uint16_t iconId = 0;
	int32_t duration = 0;
	bool isDecaying = false;
};

struct ItemImbuInfo_t {
	uint8_t slotCount = 0;
	std::vector<StaticImbuement_t> imbuements;
};

struct LightInfo {
	uint8_t level = 0;
	uint8_t color = 215;
	constexpr LightInfo() = default;
	constexpr LightInfo(uint8_t level, uint8_t color) : level(level), color(color) {}
};

struct ShopInfo {
	uint16_t itemId = 0;
	int32_t subType = 1;
	uint32_t buyPrice = 0;
	uint32_t sellPrice = 0;
	std::string realName = "";

	ShopInfo() = default;
	ShopInfo(uint16_t itemId, int32_t subType = 0, uint32_t buyPrice = 0, uint32_t sellPrice = 0, std::string realName = "")
		: itemId(itemId), subType(subType), buyPrice(buyPrice), sellPrice(sellPrice), realName(std::move(realName)) {}
};

// hash for grouping itemType count by tier
struct ItemTypeTierHash {
	std::size_t operator()(const std::pair<uint16_t, uint8_t>& s) const noexcept
	{
		uint32_t i = static_cast<uint32_t>(s.first) << 8 | s.second;
		return std::hash<uint32_t>{}(i);
	}
};
typedef std::unordered_map<std::pair<uint16_t, uint8_t>, uint32_t, ItemTypeTierHash> TieredItemsCountMap;

struct MarketOffer {
	uint64_t price;
	uint32_t timestamp;
	uint16_t amount;
	uint16_t counter;
	uint16_t itemId;
	uint8_t tier;
	std::string playerName;
};

struct MarketOfferEx {
	MarketOfferEx() = default;
	MarketOfferEx(MarketOfferEx&& other) :
		id(other.id), playerId(other.playerId), timestamp(other.timestamp), price(other.price),
		amount(other.amount), counter(other.counter), itemId(other.itemId), tier(other.tier), type(other.type),
		playerName(std::move(other.playerName)) {}

	uint32_t id;
	uint32_t playerId;
	uint32_t timestamp;
	uint64_t price;
	uint16_t amount;
	uint16_t counter;
	uint16_t itemId;
	uint8_t tier;
	MarketAction_t type;
	std::string playerName;
};

struct HistoryMarketOffer {
	uint32_t timestamp;
	uint64_t price;
	uint16_t itemId;
	uint16_t amount;
	uint8_t tier;
	MarketOfferState_t state;
};

struct MarketStatistics {
	uint32_t numTransactions = 0;
	uint32_t highestPrice = 0;
	uint64_t totalPrice = 0;
	uint32_t lowestPrice = 0;
};

struct ModalWindow
{
	std::list<std::pair<std::string, uint8_t>> buttons, choices;
	std::string title, message;
	uint32_t id;
	uint8_t defaultEnterButton = 0xFF, defaultEscapeButton = 0xFF;
	bool priority = false;

	ModalWindow(uint32_t id, std::string title, std::string message) : title(std::move(title)), message(std::move(message)), id(id) {}
};

enum CombatOrigin
{
	ORIGIN_NONE,
	ORIGIN_CONDITION,
	ORIGIN_SPELL,
	ORIGIN_MELEE,
	ORIGIN_RANGED,
	ORIGIN_WAND,
	ORIGIN_REFLECT,
	ORIGIN_CONVERTED, // imbuement damage conversion
	ORIGIN_ABSORB, // absorb
};

struct CombatDamage
{
	struct {
		CombatType_t type = COMBAT_NONE;
		int32_t value = 0;
	} primary = {}, secondary = {};

	CombatOrigin origin = ORIGIN_NONE;
	BlockType_t blockType = BLOCK_NONE;
	bool critical = false;
	bool leeched = false;
	bool fatal = false;
	bool absorb = false;
	bool reflect = false;
};

struct Reflect {
	Reflect() = default;
	Reflect(uint16_t percent, uint16_t chance) : percent(percent), chance(chance) {};

	Reflect& operator+=(const Reflect& other) {
		percent += other.percent;
		chance = std::min(100, chance + other.chance);
		return *this;
	}

	uint16_t percent = 0;
	uint16_t chance = 0;
};

using MarketOfferList = std::list<MarketOffer>;
using HistoryMarketOfferList = std::list<HistoryMarketOffer>;
using ShopInfoList = std::list<ShopInfo>;

enum MonstersEvent_t : uint8_t {
	MONSTERS_EVENT_NONE = 0,
	MONSTERS_EVENT_THINK = 1,
	MONSTERS_EVENT_APPEAR = 2,
	MONSTERS_EVENT_DISAPPEAR = 3,
	MONSTERS_EVENT_MOVE = 4,
	MONSTERS_EVENT_SAY = 5,
};

struct GameStoreRequest
{
	uint32_t offerId = 0;
	uint8_t actionType = 0;
	uint8_t sortOrder = 0;
	uint8_t primaryValue = 0;
	uint8_t secondaryValue = 0;

	std::string primaryText;
	std::string secondaryText;
};

enum StoreRequestTypes_t : uint8_t {
	STORE_REQUEST_HOME,
	STORE_REQUEST_WINDOWID,
	STORE_REQUEST_CATEGORY,
	STORE_REQUEST_WINDOWID_2,
	STORE_REQUEST_OFFERID,
	STORE_REQUEST_SEARCH,
};

enum SkillWheelAbilities_t {
	SKILLWHEEL_NONE = 0,

	// skill wheel puzzle pieces
	// ordered by slice
	// first id is 1, last id is 36

	SKILLWHEEL_STRAWBERRY_1 = 16,
	SKILLWHEEL_STRAWBERRY_2_TOP = 10,
	SKILLWHEEL_STRAWBERRY_2_BOTTOM = 17,
	SKILLWHEEL_STRAWBERRY_3_TOP = 4,
	SKILLWHEEL_STRAWBERRY_3_MIDDLE = 11,
	SKILLWHEEL_STRAWBERRY_3_BOTTOM = 18,
	SKILLWHEEL_STRAWBERRY_4_TOP = 5,
	SKILLWHEEL_STRAWBERRY_4_BOTTOM = 12,
	SKILLWHEEL_STRAWBERRY_5 = 6,

	SKILLWHEEL_GRAPE_1 = 22,
	SKILLWHEEL_GRAPE_2_TOP = 23,
	SKILLWHEEL_GRAPE_2_BOTTOM = 28,
	SKILLWHEEL_GRAPE_3_TOP = 24,
	SKILLWHEEL_GRAPE_3_MIDDLE = 29,
	SKILLWHEEL_GRAPE_3_BOTTOM = 34,
	SKILLWHEEL_GRAPE_4_TOP = 30,
	SKILLWHEEL_GRAPE_4_BOTTOM = 35,
	SKILLWHEEL_GRAPE_5 = 36,

	SKILLWHEEL_MINT_1 = 21,
	SKILLWHEEL_MINT_2_TOP = 20,
	SKILLWHEEL_MINT_2_BOTTOM = 27,
	SKILLWHEEL_MINT_3_TOP = 19,
	SKILLWHEEL_MINT_3_MIDDLE = 26,
	SKILLWHEEL_MINT_3_BOTTOM = 33,
	SKILLWHEEL_MINT_4_TOP = 25,
	SKILLWHEEL_MINT_4_BOTTOM = 32,
	SKILLWHEEL_MINT_5 = 31,

	SKILLWHEEL_LIME_1 = 15,
	SKILLWHEEL_LIME_2_TOP = 9,
	SKILLWHEEL_LIME_2_BOTTOM = 14,
	SKILLWHEEL_LIME_3_TOP = 3,
	SKILLWHEEL_LIME_3_MIDDLE = 8,
	SKILLWHEEL_LIME_3_BOTTOM = 13,
	SKILLWHEEL_LIME_4_TOP = 2,
	SKILLWHEEL_LIME_4_BOTTOM = 7,
	SKILLWHEEL_LIME_5 = 1,

	SKILLWHEEL_LAST = SKILLWHEEL_GRAPE_5,
};
#endif
