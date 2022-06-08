//
//  OMSDKVersionProvider.h
//  PrebidMobile
//
//  Created by Maxim Kucherov on 08.06.2022.
//  Copyright © 2022 AppNexus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OMSDKVersionProvider : NSObject

@property (nonatomic, strong, class, readonly) NSString *omSDKVersionString;

@end

NS_ASSUME_NONNULL_END
