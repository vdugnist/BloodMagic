//
//  BMStandardStorage.h
//  BloodMagic
//
//  Created by AlexDenisov on 4/9/14.
//  Copyright (c) 2014 Railsware. All rights reserved.
//

#import "BMPreference.h"

@interface BMStandardStorage : NSObject
    <BMPreference>

@property (nonatomic, copy) NSString *preference;

@end
