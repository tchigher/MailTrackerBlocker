//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDPersistedMessageQueryIterator.h>

#import <MailFW/MFMessageConsumer-Protocol.h>
#import <MailFW/MFQueryProgressMonitor-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MFMessagePersistenceQueryIterator : EDPersistedMessageQueryIterator <MFMessageConsumer, MFQueryProgressMonitor>
{
}

- (void)finishedSendingMessages;	// IMP=0x00000000001879e0
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 fromUpdate:(BOOL)arg3;	// IMP=0x00000000001879aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL shouldCancel;
@property(readonly) Class superclass;

@end

