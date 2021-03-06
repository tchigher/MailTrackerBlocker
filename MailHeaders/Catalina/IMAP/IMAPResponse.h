//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface IMAPResponse : NSObject
{
    BOOL _wasHandled;	// 8 = 0x8
    NSString *_tag;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;	// IMP=0x0000000000050d12
+ (id)newIMAPResponseWithConnection:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002fc5
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) BOOL wasHandled; // @synthesize wasHandled=_wasHandled;
- (void).cxx_destruct;	// IMP=0x00000000000058e8
- (id)description;	// IMP=0x0000000000050d1a
@property(readonly, nonatomic) BOOL isUntagged;

@end

