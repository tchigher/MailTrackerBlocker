//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCAddressManager : NSObject
{
}

+ (id)addAddressToAddressBook:(id)arg1;	// IMP=0x000000000003b26c
+ (id)addEmailAddressToCardMatchingFirstAndLastNameFromFormattedAddress:(id)arg1;	// IMP=0x000000000003acef
+ (id)_addressBookRecordsForFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x000000000003ab13
+ (id)emailAddressesFromGroup:(id)arg1;	// IMP=0x000000000003a9ba
+ (void)_addEmailsFromGroup:(id)arg1 toDictionary:(id)arg2;	// IMP=0x000000000003a68f
+ (id)groupsMatchingString:(id)arg1;	// IMP=0x000000000002cae1
+ (id)replaceGroupsWithUndisclosedRecipients:(id)arg1;	// IMP=0x000000000003a49e
+ (id)expandGroups:(id)arg1;	// IMP=0x000000000002c65d
+ (id)previousRecipientsLog;	// IMP=0x000000000003a441

@end

