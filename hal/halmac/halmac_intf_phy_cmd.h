#ifndef HALMAC_INTF_PHY_CMD
#define HALMAC_INTF_PHY_CMD

/* Cut mask */
typedef enum _HALMAC_INTF_PHY_CUT {
	HALMAC_INTF_PHY_CUT_TESTCHIP = BIT(0),
	HALMAC_INTF_PHY_CUT_A = BIT(1),
	HALMAC_INTF_PHY_CUT_B = BIT(2),
	HALMAC_INTF_PHY_CUT_C = BIT(3),
	HALMAC_INTF_PHY_CUT_D = BIT(4),
	HALMAC_INTF_PHY_CUT_E = BIT(5),
	HALMAC_INTF_PHY_CUT_F = BIT(6),
	HALMAC_INTF_PHY_CUT_G = BIT(7),
	HALMAC_INTF_PHY_CUT_ALL = 0x7FFF,
} HALMAC_INTF_PHY_CUT;

/* IP selection */
typedef enum _HALMAC_IP_SEL {
	HALMAC_IP_SEL_INTF_PHY = 0,
	HALMAC_IP_SEL_MAC = 1,
	HALMAC_IP_SEL_PCIE_DBI = 2,
	HALMAC_IP_SEL_UNDEFINE = 0x7FFF,
} HALMAC_IP_SEL;

/* Platform mask */
typedef enum _HALMAC_INTF_PHY_PLATFORM {
	HALMAC_INTF_PHY_PLATFORM_ALL = 0x7FFF,
} HALMAC_INTF_PHY_PLATFORM;

#endif
