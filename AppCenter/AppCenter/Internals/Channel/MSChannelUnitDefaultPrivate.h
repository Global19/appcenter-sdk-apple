#import <Foundation/Foundation.h>

#import "MSChannelUnitDefault.h"

NS_ASSUME_NONNULL_BEGIN

@interface MSChannelUnitDefault ()

@property(nonatomic) NSHashTable *pausedTokens;

@property(nonatomic) NSHashTable<NSString *> *pausedIKeys;

@end

NS_ASSUME_NONNULL_END
