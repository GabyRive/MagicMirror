//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSLayer.h"

#import "BCOutlineViewNode.h"
#import "MSLayerContainment.h"
#import "MSLayerManipulation.h"
#import "MSLayerTraits.h"
#import "MSRectDelegate.h"

@class MSAbsoluteRect, NSAffineTransform, NSDictionary, NSMenu, NSString;

@protocol MSLayer <BCOutlineViewNode, MSLayerContainment, MSLayerManipulation, MSLayerTraits, NSCoding, NSCopying, MSRectDelegate>

- (NSString *)objectID;
+ (void)alignLayers:(id)arg1 toValue:(double)arg2 forKey:(id)arg3;
+ (void)alignLayers:(id)arg1 withMode:(unsigned long long)arg2 toKey:(id)arg3 pixelFit:(BOOL)arg4;
+ (struct CGRect)alignmentRectForLayers:(id)arg1;
+ (id)keyPathsForValuesAffectingBadgeMap;
+ (id)keyPathsForValuesAffectingHasHighlight;
+ (id)keyPathsForValuesAffectingPreviewImages;
+ (id)keyPathsForValuesAffectingUserVisibleRotation;
+ (id)layersSeparatedByGroups:(id)arg1;
+ (void)makeLayerNamesUnique:(id)arg1;
+ (unsigned long long)traits;

- (struct CGAffineTransform)CGTransformForFrame;
- (id)CSSAttributeString;
- (id)CSSAttributes;
- (id)CSSRotation;
- (id)CSSStringFromFloat:(double)arg1;
- (struct CGRect)absoluteDirtyRect;
- (struct CGRect)absoluteInfluenceRect;
- (struct CGPoint)absolutePosition;
@property(retain, nonatomic) MSAbsoluteRect *absoluteRect; // @synthesize absoluteRect=_absoluteRect;
- (void)addBadgeImageNamed:(id)arg1 toMap:(id)arg2 withKey:(id)arg3;
- (void)addChildrenToElement:(id)arg1 exporter:(id)arg2;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (void)addGradientsToDocument:(id)arg1;
- (void)addLayers:(id)arg1;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2;
- (id)allLayersWithForcedClickThrough:(BOOL)arg1;
- (id)ancestorTransforms;
- (id)ancestors;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (void)assignWithOriginalLinkedStyleIfNecessary;
@property(readonly, nonatomic) NSDictionary *badgeMap;
- (id)badgeMapWithBaseName:(id)arg1;
@property(readonly, nonatomic) NSMenu *badgeMenu;
- (id)badgeNameLookup;
- (id)bezierPath;
- (id)bezierPathForHover;
- (id)bezierPathWithTransforms;
- (BOOL)booleanOperationCanBeReset;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)boundsRect;
- (id)cachedImage;
@property(nonatomic) struct CGRect cachedInfluenceRectForBounds; // @synthesize cachedInfluenceRectForBounds=_cachedInfluenceRectForBounds;
- (BOOL)calculateHasBlendedLayer;
- (struct CGRect)calculateInfluenceRectForBounds;
- (void)calculateProportions;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (BOOL)canBeHidden;
- (BOOL)canBeHovered;
- (BOOL)canBePartOfSymbol;
- (BOOL)canBeSelectedOnCanvas;
- (BOOL)canBeTransformed;
- (BOOL)canBeUsedAsSymbolDirectly;
- (BOOL)canContainLayer:(id)arg1;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canFlatten;
- (BOOL)canMoveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canRotate;
- (BOOL)canSmartRotate;
- (BOOL)canSnapSizeToLayer:(id)arg1;
- (BOOL)canSnapToLayer:(id)arg1;
- (BOOL)canSplitPaths;
- (id)candidatesForMasking;
- (void)changeColor:(id)arg1;
- (id)children;
- (Class)classToUseForNameCounter;
- (void)clearCachedImage;
- (void)clearInfluenceCache;
- (BOOL)closePath;
- (id)closestClippingLayer;
- (id)closestSymbolInstance;
- (id)colorForHover;
- (void)concatAncestorTransforms;
@property(nonatomic) BOOL constrainProportions;
- (id)containedLayers;
- (unsigned long long)containedLayersCount;
- (BOOL)containsLayers;
- (BOOL)containsMultipleLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsSelectedItem;
- (BOOL)containsSymbols;
- (struct CGPoint)convertPointFromParentRoot:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToAbsoluteCoordinates:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToLayerCoordinates:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToParentRoot:(struct CGPoint)arg1;
- (struct CGRect)convertRectToAbsoluteCoordinates:(struct CGRect)arg1;
- (void)copyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)decodePropertiesWithCoder:(id)arg1;
- (id)defaultName;
- (id)displayName;
@property(readonly, nonatomic) unsigned long long displayType;
- (void)drawHoverWithZoom:(double)arg1;
- (void)drawPreviewInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (id)duplicate;
@property(readonly, nonatomic) BOOL expandableInLayerList;
@property(readonly, nonatomic) unsigned long long filterType;
- (id)firstLayer;
- (BOOL)flattenIfNecessary;
- (struct CGRect)frameForTransforms;
@property(nonatomic) struct CGRect frameInArtboard;
- (void)groupDidAddThisLayer:(id)arg1;
- (void)groupDidRemoveThisLayer:(id)arg1;
- (BOOL)handleDoubleClick;
- (id)handlerName;
- (BOOL)hasActiveBackgroundBlur;
- (BOOL)hasBitmapStylesEnabled;
- (BOOL)hasClippingMask;
@property(readonly, nonatomic) BOOL hasHighlight;
- (BOOL)hasTransforms;
- (void)hideSelectionTemporarily;
- (BOOL)hitTest:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)includeInLayersBelowPoint;
- (unsigned long long)indexOfLayer:(id)arg1;
- (struct BCEdgePaddings)influenceRectEdgePaddingsThatCascadeToContainedLayers;
- (struct BCEdgePaddings)influenceRectEdgePaddingsThatDoNotCascade;
- (struct CGRect)influenceRectForBounds;
- (struct CGRect)influenceRectForFrame;
- (struct CGRect)influenceRectForFrameFromBoundsInfluenceRect:(struct CGRect)arg1;
- (double)influenceRectPaddingThatCascadesToContainedLayers;
- (void)initEmptyObject;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertLayers:(id)arg1 afterLayer:(id)arg2;
- (void)insertLayers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertLayers:(id)arg1 beforeLayer:(id)arg2;
- (id)inspectorViewControllerNames;
- (id)inspectorViewControllers;
- (BOOL)intersectsSlice:(id)arg1;
- (void)invalidateLightweightCopy:(id)arg1;
@property(readonly, nonatomic) BOOL isActive;
@property(nonatomic) BOOL isAlreadyCaching; // @synthesize isAlreadyCaching=_isAlreadyCaching;
@property(readonly, nonatomic) BOOL isExpanded;
@property(readonly, nonatomic) BOOL isExportableViaDragAndDrop;
- (BOOL)isFrameEqualForSync:(id)arg1;
@property(nonatomic) BOOL isHovering; // @synthesize isHovering=_isHovering;
- (BOOL)isInstanceOfSameSymbolAs:(id)arg1;
- (BOOL)isLayerExportable;
- (BOOL)isLine;
- (BOOL)isMasked;
- (BOOL)isOpen;
- (BOOL)isOpenForFindingAllLayers:(BOOL)arg1;
- (BOOL)isPartOfClippingMask;
- (BOOL)isRectIntegral;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
- (BOOL)isSharedObject;
- (BOOL)isSymbol;
- (BOOL)isTooSmallForHitTesting:(double)arg1;
- (BOOL)isUndoingModelObjectChange;
- (id)lastLayer;
- (id)layerAtIndex:(unsigned long long)arg1;
- (void)layerDidChange;
- (void)layerDidResizeFromInspector;
- (void)layerDidResizeFromRect:(struct CGRect)arg1;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (void)layerFinishedResize;
- (struct CGPoint)layerOffsetWithExporter:(id)arg1;
- (Class)layerSnapperObjectClass;
- (id)layerSuitableForInsertingIntoGroup:(id)arg1;
- (void)layerWillResize;
- (id)layerWithID:(id)arg1;
- (id)layersSharingStyle:(id)arg1;
@property(nonatomic) struct CGRect lightweightAbsoluteRect; // @synthesize lightweightAbsoluteRect=_lightweightAbsoluteRect;
@property(nonatomic) struct CGRect lightweightDrawableFrame; // @synthesize lightweightDrawableFrame=_lightweightDrawableFrame;
@property(retain, nonatomic) NSAffineTransform *lightweightTransform; // @synthesize lightweightTransform=_lightweightTransform;
- (void)makeNameUnique;
- (void)makeOriginIntegral;
- (void)makeRectIntegral;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (void)markLayerDirtyOfType:(unsigned long long)arg1 margins:(struct CGSize)arg2;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)multiplyBy:(double)arg1;
- (id)namesOfAllLayersInContainer:(id)arg1;
- (void)objectDidChange;
- (void)objectDidInit;
- (id)objectIDsForSelfAncestorsAndChildren;
@property(nonatomic) struct CGPoint origin;
- (id)parentArtboard;
- (id)parentForInsertingLayers;
- (BOOL)parentOrSelfIsSymbol;
- (id)parentPage;
- (id)parentRoot;
- (id)parentRootForAbsoluteRect;
- (void)parentWillResizeLayerToRect:(struct CGRect)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (id)previewBorderColor:(BOOL)arg1;
- (id)previewFillColor:(BOOL)arg1;
- (id)previewImageWithSelectedState:(BOOL)arg1;
@property(readonly, nonatomic) NSDictionary *previewImages;
@property(nonatomic) double proportions;
@property(nonatomic) struct CGRect rect;
- (void)rectDidChange:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)refreshForPropertyChanged;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (struct CGRect)relativeRectWithExporter:(id)arg1;
- (void)removeAllLayers;
- (void)removeFromParent;
- (void)removeLayer:(id)arg1;
- (void)removeLayerAtIndex:(unsigned long long)arg1;
- (id)renderBitmapEffects:(id)arg1;
- (Class)rendererClass;
- (void)replaceLayersWithLayers:(id)arg1;
- (id)rootForNameUniqueing;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2 showSelection:(BOOL)arg3;
@property(readonly, nonatomic) unsigned long long selectedBadgeMenuItem;
- (long long)selectedCorner:(struct CGPoint)arg1 zoom:(double)arg2;
@property(readonly, nonatomic) BOOL selectedInLayerList;
- (unsigned long long)selectionCornerMaskWithZoomValue:(double)arg1;
- (void)setAbsolutePosition:(struct CGPoint)arg1;
- (void)setFrameInArtboard:(struct CGRect)arg1 insertingIntoGroup:(id)arg2;
- (void)setHeightRespectingProportions:(double)arg1;
- (void)setIgnoreNextClickThrough:(BOOL)arg1;
- (void)setIsFlippedHorizontal:(BOOL)arg1;
- (void)setIsFlippedVertical:(BOOL)arg1;
- (void)setLayerListExpandedType:(long long)arg1;
- (void)setMid:(struct CGPoint)arg1;
@property(retain, nonatomic) NSString *name;
- (void)setNilValueForKey:(id)arg1;
- (void)setRotation:(double)arg1;
@property(nonatomic) unsigned long long traits; // @synthesize traits=_traits;
@property(nonatomic) struct _CHTransformStruct transformStruct;
@property(retain, nonatomic) id undoRefreshTimer; // @synthesize undoRefreshTimer=_undoRefreshTimer;
@property(nonatomic) double userVisibleRotation;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setWidthRespectingProportions:(double)arg1;
- (void)setupWithLayerBuilderDictionary:(id)arg1;
- (id)sharedObjectOfType:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL shouldCachePreview;
- (BOOL)shouldClickThroughMouse:(struct CGPoint)arg1 force:(BOOL)arg2 zoomValue:(double)arg3;
- (unsigned long long)shouldDraw;
- (BOOL)shouldDrawSelection;
- (BOOL)shouldFlattenAfterRotate;
- (BOOL)shouldIncludeLayerInSlice:(id)arg1;
- (BOOL)shouldRenderInTransparencyLayer;
- (id)snapItemForDrawing;
- (id)snapLines;
- (BOOL)supportsInnerOuterBorders;
- (id)svgStyle;
- (void)toggleClosePath;
- (id)transform;
- (id)transformForRect:(struct CGRect)arg1;
- (struct CGRect)translateInfluenceRectFromBoundsToFrame:(struct CGRect)arg1;
- (BOOL)transparencyLayerUseRectCondition;
- (BOOL)useProportionalResizingFromCorner:(long long)arg1;
- (id)usedStyle;
- (id)valueForUndefinedKey:(id)arg1;
- (void)writeBitmapImageToFile:(id)arg1;
- (void)writeSVGToElement:(id)arg1 withExporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;

@end

