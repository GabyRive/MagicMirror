//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableBitmapLayer.h"

#import "MSImageOwner.h"

@class NSString;

@interface MSImmutableBitmapLayer : _MSImmutableBitmapLayer <MSImageOwner>
{
    BOOL _treatAsAlpha;
}

- (id)NSImage;
- (void)initObjectWithCoder:(id)arg1;
- (id)initWithMutableModelObject:(id)arg1;
@property(nonatomic) BOOL treatAsAlpha; // @synthesize treatAsAlpha=_treatAsAlpha;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

