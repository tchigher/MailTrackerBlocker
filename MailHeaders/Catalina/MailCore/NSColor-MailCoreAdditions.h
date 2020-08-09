//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSColor.h>

@class NSString;

@interface NSColor (MailCoreAdditions)
+ (BOOL)isDarkEffectiveAppearance:(id)arg1;	// IMP=0x0000000000086592
+ (BOOL)isDarkAppearance;	// IMP=0x0000000000086516
+ (id)scriptingRGBColorWithDescriptor:(id)arg1;	// IMP=0x0000000000086425
+ (id)aquaBlueColor;	// IMP=0x00000000000863ec
+ (id)junkMailColor;	// IMP=0x00000000000863cc
+ (id)threadBackgroundColor;	// IMP=0x0000000000086282
+ (void)_clearThreadBackgroundColors;	// IMP=0x0000000000086265
+ (id)childThreadBackgroundColor;	// IMP=0x0000000000086245
+ (id)parentThreadBackgroundColor;	// IMP=0x0000000000086225
+ (void)setThreadBackgroundColor:(id)arg1;	// IMP=0x000000000008613c
+ (id)colorWithIntValue:(int)arg1;	// IMP=0x0000000000002843
+ (id)newSwatchForColor:(id)arg1;	// IMP=0x0000000000085f44
+ (void)configureColorMenu:(id)arg1;	// IMP=0x0000000000085d95
+ (id)_legacyColorForIdentifier:(id)arg1;	// IMP=0x0000000000085b48
+ (id)_assetBasedColorForIdentifier:(id)arg1;	// IMP=0x0000000000085a87
+ (id)colorForIdentifier:(id)arg1;	// IMP=0x000000000001eba6
+ (id)_identifierForLegacyColor:(id)arg1;	// IMP=0x000000000008586b
+ (id)_identifierForAssetBasedColor:(id)arg1;	// IMP=0x0000000000085713
+ (id)identifierForColor:(id)arg1;	// IMP=0x000000000008568a
+ (id)_colorPlist;	// IMP=0x00000000000855d3
+ (id)colorForHighlightColorValue:(unsigned int)arg1;	// IMP=0x0000000000085338
+ (unsigned int)highlightColorValueForColor:(id)arg1;	// IMP=0x000000000008523b
+ (id)colorForQuoteLevel:(unsigned long long)arg1;	// IMP=0x000000000008519e
+ (void)setQuotingColorList:(id)arg1;	// IMP=0x0000000000084e61
+ (id)quotingColorList;	// IMP=0x000000000001e552
+ (id)defaultQuotingColors;	// IMP=0x000000000001e9d4
- (id)_semanticCSSColorOverrideForAppearance:(id)arg1;	// IMP=0x0000000000086a12
- (id)cssColorStringForAppearance:(id)arg1;	// IMP=0x00000000000867e4
@property(readonly, copy, nonatomic) NSString *cssColorString;
- (id)scriptingRGBColorDescriptor;	// IMP=0x00000000000866e5
- (id)messageBlendedBackgroundColor;	// IMP=0x0000000000086670
@property(readonly, nonatomic) int intValue;
@end
