//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BasicComposeContext.h"

@interface _CompletionComposeContext : BasicComposeContext
{
    id _loadCompletedHandler;	// 8 = 0x8
}

@property(copy, nonatomic) id loadCompletedHandler; // @synthesize loadCompletedHandler=_loadCompletedHandler;
// - (void).cxx_destruct;	// IMP=0x0000000100277df2
- (void)presentComposeViewController:(id)arg1 completion:(id)arg2;	// IMP=0x0000000100277dc8
- (void)loadCompleted:(id)arg1;	// IMP=0x0000000100277d34

@end
