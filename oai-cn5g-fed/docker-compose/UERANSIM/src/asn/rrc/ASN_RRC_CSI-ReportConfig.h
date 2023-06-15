/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_CSI_ReportConfig_H_
#define	_ASN_RRC_CSI_ReportConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_RRC_CSI-ReportConfigId.h"
#include "ASN_RRC_ServCellIndex.h"
#include "ASN_RRC_CSI-ResourceConfigId.h"
#include <NativeEnumerated.h>
#include "ASN_RRC_CSI-ReportPeriodicityAndOffset.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include "ASN_RRC_P0-PUSCH-AlphaSetId.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <NULL.h>
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_CSI_ReportConfig__reportConfigType_PR {
	ASN_RRC_CSI_ReportConfig__reportConfigType_PR_NOTHING,	/* No components present */
	ASN_RRC_CSI_ReportConfig__reportConfigType_PR_periodic,
	ASN_RRC_CSI_ReportConfig__reportConfigType_PR_semiPersistentOnPUCCH,
	ASN_RRC_CSI_ReportConfig__reportConfigType_PR_semiPersistentOnPUSCH,
	ASN_RRC_CSI_ReportConfig__reportConfigType_PR_aperiodic
} ASN_RRC_CSI_ReportConfig__reportConfigType_PR;
typedef enum ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig {
	ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl5	= 0,
	ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl10	= 1,
	ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl20	= 2,
	ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl40	= 3,
	ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl80	= 4,
	ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl160	= 5,
	ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl320	= 6
} e_ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig;
typedef enum ASN_RRC_CSI_ReportConfig__reportQuantity_PR {
	ASN_RRC_CSI_ReportConfig__reportQuantity_PR_NOTHING,	/* No components present */
	ASN_RRC_CSI_ReportConfig__reportQuantity_PR_none,
	ASN_RRC_CSI_ReportConfig__reportQuantity_PR_cri_RI_PMI_CQI,
	ASN_RRC_CSI_ReportConfig__reportQuantity_PR_cri_RI_i1,
	ASN_RRC_CSI_ReportConfig__reportQuantity_PR_cri_RI_i1_CQI,
	ASN_RRC_CSI_ReportConfig__reportQuantity_PR_cri_RI_CQI,
	ASN_RRC_CSI_ReportConfig__reportQuantity_PR_cri_RSRP,
	ASN_RRC_CSI_ReportConfig__reportQuantity_PR_ssb_Index_RSRP,
	ASN_RRC_CSI_ReportConfig__reportQuantity_PR_cri_RI_LI_PMI_CQI
} ASN_RRC_CSI_ReportConfig__reportQuantity_PR;
typedef enum ASN_RRC_CSI_ReportConfig__reportQuantity__cri_RI_i1_CQI__pdsch_BundleSizeForCSI {
	ASN_RRC_CSI_ReportConfig__reportQuantity__cri_RI_i1_CQI__pdsch_BundleSizeForCSI_n2	= 0,
	ASN_RRC_CSI_ReportConfig__reportQuantity__cri_RI_i1_CQI__pdsch_BundleSizeForCSI_n4	= 1
} e_ASN_RRC_CSI_ReportConfig__reportQuantity__cri_RI_i1_CQI__pdsch_BundleSizeForCSI;
typedef enum ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__cqi_FormatIndicator {
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__cqi_FormatIndicator_widebandCQI	= 0,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__cqi_FormatIndicator_subbandCQI	= 1
} e_ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__cqi_FormatIndicator;
typedef enum ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__pmi_FormatIndicator {
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__pmi_FormatIndicator_widebandPMI	= 0,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__pmi_FormatIndicator_subbandPMI	= 1
} e_ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__pmi_FormatIndicator;
typedef enum ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR {
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_NOTHING,	/* No components present */
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands3,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands4,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands5,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands6,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands7,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands8,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands9,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands10,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands11,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands12,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands13,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands14,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands15,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands16,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands17,
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands18,
	/* Extensions may appear below */
	ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands19_v1530
} ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR;
typedef enum ASN_RRC_CSI_ReportConfig__timeRestrictionForChannelMeasurements {
	ASN_RRC_CSI_ReportConfig__timeRestrictionForChannelMeasurements_configured	= 0,
	ASN_RRC_CSI_ReportConfig__timeRestrictionForChannelMeasurements_notConfigured	= 1
} e_ASN_RRC_CSI_ReportConfig__timeRestrictionForChannelMeasurements;
typedef enum ASN_RRC_CSI_ReportConfig__timeRestrictionForInterferenceMeasurements {
	ASN_RRC_CSI_ReportConfig__timeRestrictionForInterferenceMeasurements_configured	= 0,
	ASN_RRC_CSI_ReportConfig__timeRestrictionForInterferenceMeasurements_notConfigured	= 1
} e_ASN_RRC_CSI_ReportConfig__timeRestrictionForInterferenceMeasurements;
typedef enum ASN_RRC_CSI_ReportConfig__dummy {
	ASN_RRC_CSI_ReportConfig__dummy_n1	= 0,
	ASN_RRC_CSI_ReportConfig__dummy_n2	= 1
} e_ASN_RRC_CSI_ReportConfig__dummy;
typedef enum ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting_PR {
	ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting_PR_NOTHING,	/* No components present */
	ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting_PR_enabled,
	ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting_PR_disabled
} ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting_PR;
typedef enum ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS {
	ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS_n1	= 0,
	ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS_n2	= 1,
	ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS_n3	= 2,
	ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS_n4	= 3
} e_ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS;
typedef enum ASN_RRC_CSI_ReportConfig__cqi_Table {
	ASN_RRC_CSI_ReportConfig__cqi_Table_table1	= 0,
	ASN_RRC_CSI_ReportConfig__cqi_Table_table2	= 1,
	ASN_RRC_CSI_ReportConfig__cqi_Table_table3	= 2,
	ASN_RRC_CSI_ReportConfig__cqi_Table_spare1	= 3
} e_ASN_RRC_CSI_ReportConfig__cqi_Table;
typedef enum ASN_RRC_CSI_ReportConfig__subbandSize {
	ASN_RRC_CSI_ReportConfig__subbandSize_value1	= 0,
	ASN_RRC_CSI_ReportConfig__subbandSize_value2	= 1
} e_ASN_RRC_CSI_ReportConfig__subbandSize;
typedef enum ASN_RRC_CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530__reportSlotConfig_v1530 {
	ASN_RRC_CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530__reportSlotConfig_v1530_sl4	= 0,
	ASN_RRC_CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530__reportSlotConfig_v1530_sl8	= 1,
	ASN_RRC_CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530__reportSlotConfig_v1530_sl16	= 2
} e_ASN_RRC_CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530__reportSlotConfig_v1530;

/* Forward declarations */
struct ASN_RRC_CodebookConfig;
struct ASN_RRC_PUCCH_CSI_Resource;
struct ASN_RRC_PortIndexFor8Ranks;

/* ASN_RRC_CSI-ReportConfig */
typedef struct ASN_RRC_CSI_ReportConfig {
	ASN_RRC_CSI_ReportConfigId_t	 reportConfigId;
	ASN_RRC_ServCellIndex_t	*carrier;	/* OPTIONAL */
	ASN_RRC_CSI_ResourceConfigId_t	 resourcesForChannelMeasurement;
	ASN_RRC_CSI_ResourceConfigId_t	*csi_IM_ResourcesForInterference;	/* OPTIONAL */
	ASN_RRC_CSI_ResourceConfigId_t	*nzp_CSI_RS_ResourcesForInterference;	/* OPTIONAL */
	struct ASN_RRC_CSI_ReportConfig__reportConfigType {
		ASN_RRC_CSI_ReportConfig__reportConfigType_PR present;
		union ASN_RRC_CSI_ReportConfig__ASN_RRC_reportConfigType_u {
			struct ASN_RRC_CSI_ReportConfig__reportConfigType__periodic {
				ASN_RRC_CSI_ReportPeriodicityAndOffset_t	 reportSlotConfig;
				struct ASN_RRC_CSI_ReportConfig__reportConfigType__periodic__pucch_CSI_ResourceList {
					A_SEQUENCE_OF(struct ASN_RRC_PUCCH_CSI_Resource) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} pucch_CSI_ResourceList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *periodic;
			struct ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUCCH {
				ASN_RRC_CSI_ReportPeriodicityAndOffset_t	 reportSlotConfig;
				struct ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUCCH__pucch_CSI_ResourceList {
					A_SEQUENCE_OF(struct ASN_RRC_PUCCH_CSI_Resource) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} pucch_CSI_ResourceList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *semiPersistentOnPUCCH;
			struct ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH {
				long	 reportSlotConfig;
				struct ASN_RRC_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotOffsetList {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} reportSlotOffsetList;
				ASN_RRC_P0_PUSCH_AlphaSetId_t	 p0alpha;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *semiPersistentOnPUSCH;
			struct ASN_RRC_CSI_ReportConfig__reportConfigType__aperiodic {
				struct ASN_RRC_CSI_ReportConfig__reportConfigType__aperiodic__reportSlotOffsetList {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} reportSlotOffsetList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *aperiodic;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportConfigType;
	struct ASN_RRC_CSI_ReportConfig__reportQuantity {
		ASN_RRC_CSI_ReportConfig__reportQuantity_PR present;
		union ASN_RRC_CSI_ReportConfig__ASN_RRC_reportQuantity_u {
			NULL_t	 none;
			NULL_t	 cri_RI_PMI_CQI;
			NULL_t	 cri_RI_i1;
			struct ASN_RRC_CSI_ReportConfig__reportQuantity__cri_RI_i1_CQI {
				long	*pdsch_BundleSizeForCSI;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *cri_RI_i1_CQI;
			NULL_t	 cri_RI_CQI;
			NULL_t	 cri_RSRP;
			NULL_t	 ssb_Index_RSRP;
			NULL_t	 cri_RI_LI_PMI_CQI;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportQuantity;
	struct ASN_RRC_CSI_ReportConfig__reportFreqConfiguration {
		long	*cqi_FormatIndicator;	/* OPTIONAL */
		long	*pmi_FormatIndicator;	/* OPTIONAL */
		struct ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand {
			ASN_RRC_CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR present;
			union ASN_RRC_CSI_ReportConfig__ASN_RRC_reportFreqConfiguration__ASN_RRC_csi_ReportingBand_u {
				BIT_STRING_t	 subbands3;
				BIT_STRING_t	 subbands4;
				BIT_STRING_t	 subbands5;
				BIT_STRING_t	 subbands6;
				BIT_STRING_t	 subbands7;
				BIT_STRING_t	 subbands8;
				BIT_STRING_t	 subbands9;
				BIT_STRING_t	 subbands10;
				BIT_STRING_t	 subbands11;
				BIT_STRING_t	 subbands12;
				BIT_STRING_t	 subbands13;
				BIT_STRING_t	 subbands14;
				BIT_STRING_t	 subbands15;
				BIT_STRING_t	 subbands16;
				BIT_STRING_t	 subbands17;
				BIT_STRING_t	 subbands18;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				BIT_STRING_t	 subbands19_v1530;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *csi_ReportingBand;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *reportFreqConfiguration;
	long	 timeRestrictionForChannelMeasurements;
	long	 timeRestrictionForInterferenceMeasurements;
	struct ASN_RRC_CodebookConfig	*codebookConfig;	/* OPTIONAL */
	long	*dummy;	/* OPTIONAL */
	struct ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting {
		ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting_PR present;
		union ASN_RRC_CSI_ReportConfig__ASN_RRC_groupBasedBeamReporting_u {
			NULL_t	 enabled;
			struct ASN_RRC_CSI_ReportConfig__groupBasedBeamReporting__disabled {
				long	*nrofReportedRS;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *disabled;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} groupBasedBeamReporting;
	long	*cqi_Table;	/* OPTIONAL */
	long	 subbandSize;
	struct ASN_RRC_CSI_ReportConfig__non_PMI_PortIndication {
		A_SEQUENCE_OF(struct ASN_RRC_PortIndexFor8Ranks) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *non_PMI_PortIndication;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct ASN_RRC_CSI_ReportConfig__ext1 {
		struct ASN_RRC_CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530 {
			long	 reportSlotConfig_v1530;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *semiPersistentOnPUSCH_v1530;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_CSI_ReportConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_reportSlotConfig_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_pdsch_BundleSizeForCSI_36;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_cqi_FormatIndicator_44;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_pmi_FormatIndicator_47;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_timeRestrictionForChannelMeasurements_69;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_timeRestrictionForInterferenceMeasurements_72;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_dummy_76;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_nrofReportedRS_82;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_cqi_Table_87;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_subbandSize_92;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_reportSlotConfig_v1530_100;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_CSI_ReportConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_CSI_ReportConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_CSI_ReportConfig_1[17];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_CSI_ReportConfig_H_ */
#include <asn_internal.h>
