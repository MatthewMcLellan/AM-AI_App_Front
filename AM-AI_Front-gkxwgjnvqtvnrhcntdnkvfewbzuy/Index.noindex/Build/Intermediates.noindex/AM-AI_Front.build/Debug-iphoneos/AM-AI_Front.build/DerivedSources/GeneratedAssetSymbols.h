#import <Foundation/Foundation.h>

#if __has_attribute(swift_private)
#define AC_SWIFT_PRIVATE __attribute__((swift_private))
#else
#define AC_SWIFT_PRIVATE
#endif

/// The resource bundle ID.
static NSString * const ACBundleID AC_SWIFT_PRIVATE = @"AMS.matthewmclellan.AM-AI-Front";

/// The "AccentColor" asset catalog color resource.
static NSString * const ACColorNameAccentColor AC_SWIFT_PRIVATE = @"AccentColor";

/// The "AM-AI-iOS-ClearDark-1024x1024" asset catalog image resource.
static NSString * const ACImageNameAMAIIOSClearDark1024X1024 AC_SWIFT_PRIVATE = @"AM-AI-iOS-ClearDark-1024x1024";

/// The "AM-AI-iOS-ClearLight-1024x1024" asset catalog image resource.
static NSString * const ACImageNameAMAIIOSClearLight1024X1024 AC_SWIFT_PRIVATE = @"AM-AI-iOS-ClearLight-1024x1024";

/// The "AM-AI-iOS-Dark-1024x1024" asset catalog image resource.
static NSString * const ACImageNameAMAIIOSDark1024X1024 AC_SWIFT_PRIVATE = @"AM-AI-iOS-Dark-1024x1024";

/// The "AM-AI-iOS-Default-1024x1024" asset catalog image resource.
static NSString * const ACImageNameAMAIIOSDefault1024X1024 AC_SWIFT_PRIVATE = @"AM-AI-iOS-Default-1024x1024";

/// The "AM-AI-iOS-TintedDark-1024x1024" asset catalog image resource.
static NSString * const ACImageNameAMAIIOSTintedDark1024X1024 AC_SWIFT_PRIVATE = @"AM-AI-iOS-TintedDark-1024x1024";

/// The "AM-AI-iOS-TintedLight-1024x1024" asset catalog image resource.
static NSString * const ACImageNameAMAIIOSTintedLight1024X1024 AC_SWIFT_PRIVATE = @"AM-AI-iOS-TintedLight-1024x1024";

/// The "Banner" asset catalog image resource.
static NSString * const ACImageNameBanner AC_SWIFT_PRIVATE = @"Banner";

/// The "Logo" asset catalog image resource.
static NSString * const ACImageNameLogo AC_SWIFT_PRIVATE = @"Logo";

#undef AC_SWIFT_PRIVATE
