#ifndef CHARACTER_DATA_PROTOCOL
#define CHARACTER_DATA_PROTOCOL(__TYPE__, __NAME__, __SCOPE__)
#endif

CHARACTER_DATA_PROTOCOL(struct _RTCharacterInfo, Info, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterEquipmentInfo, EquipmentInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterEquipmentLockInfo, EquipmentLockInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterInventoryInfo, InventoryInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterSkillSlotInfo, SkillSlotInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterQuickSlotInfo, QuickSlotInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterEssenceAbilityInfo, EssenceAbilityInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterBlendedAbilityInfo, BlendedAbilityInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterKarmaAbilityInfo, KarmaAbilityInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterBlessingBeadInfo, BlessingBeadInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterPremiumServiceInfo, PremiumServiceInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterQuestSlotInfo, QuestSlotInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterQuestFlagInfo, QuestFlagInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterDungeonQuestFlagInfo, DungeonQuestFlagInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterDailyQuestInfo, DailyQuestInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterMercenaryInfo, MercenaryInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterEquipmentAppearanceInfo, EquipmentAppearanceInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterInventoryAppearanceInfo, InventoryAppearanceInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterAchievementInfo, AchievementInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterRequestCraftInfo, RequestCraftInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterBuffInfo, BuffInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterVehicleInventoryInfo, VehicleInventoryInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterGoldMeritMasteryInfo, GoldMeritMasteryInfo, Account)
//CHARACTER_DATA_PROTOCOL(struct _RTCharacterPlatinumMeritMasteryInfo, PlatinumMeritMasteryInfo, Account)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterOverlordMasteryInfo, OverlordMasteryInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterHonorMedalInfo, HonorMedalInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterForceWingInfo, ForceWingInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterGiftboxInfo, GiftboxInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterCollectionInfo, CollectionInfo, Account)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterTransformInfo, TransformInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterTranscendenceInfo, TranscendenceInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterStellarMasteryInfo, StellarMasteryInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterMythMasteryInfo, MythMasteryInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterNewbieSupportInfo, NewbieSupportInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterEventPassInfo, EventPassInfo, Account)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterCostumeWarehouseInfo, CostumeWarehouseInfo, Account)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterCostumeInfo, CostumeInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterWarehouseInfo, WarehouseInfo, Account)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterInventoryInfo, TemporaryInventoryInfo, Character)
CHARACTER_DATA_PROTOCOL(struct _RTCharacterRecoveryInfo, RecoveryInfo, Character)

#undef CHARACTER_DATA_PROTOCOL