//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/DOMHTMLDocument.h>

@class DOMHTMLHeadElement, DOMHTMLMetaElement, NSArray;

@interface DOMHTMLDocument (MailExtras)
+ (id)listElements;	// IMP=0x0000000100138654
- (id)createElement:(id)arg1 class:(id)arg2 id:(id)arg3 editable:(id)arg4;	// IMP=0x0000000100138fdc
@property(readonly, copy, nonatomic) NSArray *backgroundImageURLs;
@property(readonly, nonatomic) DOMHTMLMetaElement *generatorMeta;
@property(readonly, nonatomic) DOMHTMLHeadElement *head;
- (id)createFragmentForURL:(id)arg1 text:(id)arg2;	// IMP=0x0000000100138daf
- (id)createSpanElementWithTabs:(long long)arg1;	// IMP=0x0000000100138ca2
- (id)_stringByRemovingLineEndingsForHTML:(id)arg1;	// IMP=0x0000000100138916
- (id)createFragmentForWebArchive:(id)arg1 baseURL:(id)arg2 bodyAsDiv:(BOOL)arg3;	// IMP=0x0000000100089d9d
- (id)createFragmentForWebArchive:(id)arg1 baseURL:(id)arg2;	// IMP=0x0000000100089d4c
- (id)createFragmentForWebArchive:(id)arg1;	// IMP=0x0000000100089d38
- (id)createNonemptyDivElementWithPlainStyle;	// IMP=0x000000010013877a
- (id)createMessageQuoteElement;	// IMP=0x00000001000554ed
- (id)createFragmentForStringLosingBR:(id)arg1;	// IMP=0x0000000100055417
- (id)createDocumentFragmentWithMarkupString:(id)arg1;	// IMP=0x0000000100057b6f
@property(readonly, nonatomic) BOOL containsSelectionMarkers;
@end

