//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableShapePathLayer.h"

@interface _MSImmutableTriangleShape : MSImmutableShapePathLayer
{
    BOOL _isEquilateral;
}

- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (BOOL)hasDefaultValues;
- (id)initWithMutableModelObject:(id)arg1;
@property(nonatomic) BOOL isEquilateral; // @synthesize isEquilateral=_isEquilateral;

@end

