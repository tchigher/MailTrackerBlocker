//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SpotlightDiagnostics : NSObject
{
}

+ (void)_checkMessages:(id)arg1 resultHandler:(id)arg2;	// IMP=0x0000000100289757
+ (id)_randomMessagesFromMailbox:(id)arg1 sinceCutoffDate:(id)arg2 sampleSize:(unsigned long long)arg3;	// IMP=0x00000001002895b0
+ (BOOL)_performVerificationWithActivity:(id)arg1;	// IMP=0x0000000100288127
+ (id)_verificationActivity;	// IMP=0x0000000100288081
+ (void)scheduleVerification;	// IMP=0x0000000100287e83
+ (id)diagnosticStringForMessages:(id)arg1;	// IMP=0x0000000100287cad
+ (id)log;	// IMP=0x0000000100287c50

@end
