#include "FWCore/Utilities/interface/typelookup.h"
#include "DetectorDescription/DDCMS/interface/DDDetector.h"
#include "DetectorDescription/DDCMS/interface/DDSpecParRegistry.h"
#include "DetectorDescription/DDCMS/interface/DDSpecParRegistryRcd.h"
#include "DetectorDescription/DDCMS/interface/DDVectorRegistry.h"
#include "FWCore/Framework/interface/eventsetuprecord_registration_macro.h"
#include "FWCore/Framework/interface/data_default_record_trait.h"

using namespace cms;

TYPELOOKUP_DATA_REG(DDDetector);
TYPELOOKUP_DATA_REG(DDSpecParRegistry);
TYPELOOKUP_DATA_REG(DDVectorRegistry);

EVENTSETUP_DATA_DEFAULT_RECORD(DDDetector, DetectorDescriptionRcd);
