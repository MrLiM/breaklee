RUNTIME_DATA_FILE_BEGIN(limit_upgrade.enc)

// TODO: Add possibility to only append repeating values once...
RUNTIME_DATA_TYPE_BEGIN(ExtremeUpgradeCategory, "cabal_limit_upgrade.limit_upgrade_base.item", 64)
	RUNTIME_DATA_PROPERTY(RTDataItemType, Type, "type")
	RUNTIME_DATA_PROPERTY(RTDataItemCategory, Category, "type")
	RUNTIME_DATA_PROPERTY(RTDataItemGroup, Group, "type")
RUNTIME_DATA_TYPE_END(ExtremeUpgradeCategory)
RUNTIME_DATA_TYPE_INDEX(ExtremeUpgradeCategory, RTDataItemType, Type)
RUNTIME_DATA_TYPE_INDEX_SUFFIXED(ExtremeUpgradeCategory, ByCategory, RTDataItemCategory, Category)
RUNTIME_DATA_TYPE_INDEX_SUFFIXED(ExtremeUpgradeCategory, ByGroup, RTDataItemGroup, Group)

RUNTIME_DATA_TYPE_BEGIN(ExtremeUpgradeBase, "cabal_limit_upgrade.limit_upgrade_base.item", 64)
	RUNTIME_DATA_PROPERTY(RTDataItemType, Type, "type")
	RUNTIME_DATA_TYPE_BEGIN_CHILD(ExtremeUpgradeBaseGrade, "base", 8)
		RUNTIME_DATA_PROPERTY(Int32, Grade, "grade")
		RUNTIME_DATA_PROPERTY(Int32, ExtremeUpgradeGroup, "limit_upgrade_group")
		RUNTIME_DATA_PROPERTY(Int32, ExtremeUpgradeMax, "limit_upgrade_max")
		RUNTIME_DATA_PROPERTY(Int32, FormulaGroup, "fomula_group")
	RUNTIME_DATA_TYPE_END_CHILD(ExtremeUpgradeBaseGrade, 8)
RUNTIME_DATA_TYPE_END(ExtremeUpgradeBase)
RUNTIME_DATA_TYPE_INDEX_CHILD(ExtremeUpgradeBase, ExtremeUpgradeBaseGrade, Int32, Grade)

RUNTIME_DATA_TYPE_BEGIN(ExtremeUpgradeMain, "cabal_limit_upgrade.limit_upgrade_main.group", 128)
	RUNTIME_DATA_PROPERTY(Int32, ExtremeUpgradeGroup, "limit_upgrade_group")
	RUNTIME_DATA_TYPE_BEGIN_CHILD(ExtremeUpgradeMainLevel, "main", 8)
		RUNTIME_DATA_PROPERTY(Int32, ExtremeUpgradeLevel, "limit_upgrade_level")
		RUNTIME_DATA_PROPERTY(Int32, ExtremeUpgradeOption, "limit_upgrade_option")
	RUNTIME_DATA_TYPE_END_CHILD(ExtremeUpgradeMainLevel, 8)
RUNTIME_DATA_TYPE_END(ExtremeUpgradeMain)
RUNTIME_DATA_TYPE_INDEX(ExtremeUpgradeMain, Int32, ExtremeUpgradeGroup)
RUNTIME_DATA_TYPE_INDEX_CHILD(ExtremeUpgradeMain, ExtremeUpgradeMainLevel, Int32, ExtremeUpgradeLevel)

RUNTIME_DATA_TYPE_BEGIN(ExtremeUpgradeFormula, "cabal_limit_upgrade.limit_upgrade_fomula.group", 8)
	RUNTIME_DATA_PROPERTY(Int32, FormulaGroup, "fomula_group")
	RUNTIME_DATA_TYPE_BEGIN_CHILD(ExtremeUpgradeFormulaLevel, "fomula", 8)
		RUNTIME_DATA_PROPERTY(Int32, ExtremeUpgradeLevel, "limit_upgrade_level")
		RUNTIME_DATA_PROPERTY(Int32, ExtremeUpgradeFactor, "limit_upgrade_factor")
		RUNTIME_DATA_PROPERTY(Int32, RequiredCoreCount, "extreme_core_number")
		RUNTIME_DATA_PROPERTY(Int32, BaseExtremeLevel, "base_extreme_level")
		RUNTIME_DATA_PROPERTY(Int32, CurrencyPrice, "alz_cost")
		RUNTIME_DATA_PROPERTY(Int32, BreakItemRate, "disabled_equip")
	RUNTIME_DATA_TYPE_END_CHILD(ExtremeUpgradeFormulaLevel, 8)
RUNTIME_DATA_TYPE_END(ExtremeUpgradeFormula)
RUNTIME_DATA_TYPE_INDEX(ExtremeUpgradeFormula, Int32, FormulaGroup)
RUNTIME_DATA_TYPE_INDEX_CHILD(ExtremeUpgradeFormula, ExtremeUpgradeFormulaLevel, Int32, ExtremeUpgradeLevel)

RUNTIME_DATA_TYPE_BEGIN(ExtremeUpgradeOption, "cabal_limit_upgrade.core_option_level.core_level", 16)
	RUNTIME_DATA_PROPERTY(Int32, Level, "core_level")
	RUNTIME_DATA_TYPE_BEGIN_CHILD(ExtremeUpgradeOptionLevel, "level", 1)
		RUNTIME_DATA_PROPERTY(Int32, OptionLevel, "option_level")
	RUNTIME_DATA_TYPE_END_CHILD(ExtremeUpgradeOptionLevel, 16)
RUNTIME_DATA_TYPE_END(ExtremeUpgradeOption)
RUNTIME_DATA_TYPE_INDEX(ExtremeUpgradeOption, Int32, Level)

RUNTIME_DATA_TYPE_BEGIN(ExtremeUpgradeValue, "cabal_limit_upgrade.limit_upgrade_value.option", 32)
	RUNTIME_DATA_PROPERTY(Int32, ExtremeUpgradeOption, "limit_upgrade_option")
	RUNTIME_DATA_TYPE_BEGIN_CHILD(ExtremeUpgradeValueOption, "value", 8)
		RUNTIME_DATA_PROPERTY(Int32, ForceEffectIndex, "force_id")
		RUNTIME_DATA_PROPERTY(Int32, ForceValue, "force_value")
		RUNTIME_DATA_PROPERTY(Int32, ForceValueType, "value_type")
	RUNTIME_DATA_TYPE_END_CHILD(ExtremeUpgradeValueOption, 8)
RUNTIME_DATA_TYPE_END(ExtremeUpgradeValue)
RUNTIME_DATA_TYPE_INDEX(ExtremeUpgradeValue, Int32, ExtremeUpgradeOption)

RUNTIME_DATA_FILE_END
