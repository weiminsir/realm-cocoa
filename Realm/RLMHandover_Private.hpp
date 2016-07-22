//
//  RLMHandover.h
//  Realm
//
//  Created by Realm on 7/22/16.
//  Copyright © 2016 Realm. All rights reserved.
//

#import "RLMHandover.h"
#import "handover.hpp"

@class RLMRealm;

NS_ASSUME_NONNULL_BEGIN

@protocol RLMHandoverable_Private

@property (readonly) realm::AnyHandoverable rlm_handoverable;
@property (readonly) id rlm_handoverMetadata;
+ (instancetype)rlm_objectWithHandoverable:(realm::AnyHandoverable&)handoverable metadata:(nullable id)metadata inRealm:(RLMRealm *)realm;

@end

@interface RLMHandoverPackage ()

- (instancetype)initWithRealm:(RLMRealm *)realm objects:(NSArray<id<RLMHandoverable>> *)objectsToHandOver;

@end

NS_ASSUME_NONNULL_END