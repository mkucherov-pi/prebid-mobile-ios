//
//  OMSDKVersionProvider.m
//  PrebidMobile
//
//  Created by Maxim Kucherov on 08.06.2022.
//  Copyright © 2022 AppNexus. All rights reserved.
//

#import "OMSDKVersionProvider.h"
@import OMSDK_Prebidorg;

@implementation OMSDKVersionProvider

+ (nonnull NSString *) omSDKVersionString {
    return [OMIDPrebidorgSDK versionString];
}

@end
