//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol MFMessageConsumer;

@protocol MFSpotlightResultCollector <NSObject>
@property(nonatomic) BOOL queryIsCancelled;
@property(nonatomic) unsigned int options;
@property(retain, nonatomic) NSArray *excludedMailboxURLs;
@property(nonatomic) BOOL checkWhereFromsPaths;
@property(retain, nonatomic) id <MFMessageConsumer> target;
- (void)cancelQuery;
- (void)receivedSpotlightCallback:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
@end
