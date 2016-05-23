//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDFParser.h"

@class NSString, PDFParser;

@interface EPSParser : NSObject <PDFParser>
{
    PDFParser *_parser;
}


- (void)debugConvertedFile:(id)arg1;
- (id)initWithScanner:(id)arg1;
- (void)loadDocumentFromData:(id)arg1;
- (void)loadDocumentFromURL:(id)arg1;
- (id)name;
- (unsigned long long)pageCount;
- (void)parseWithProgress:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) PDFParser *parser; // @synthesize parser=_parser;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

