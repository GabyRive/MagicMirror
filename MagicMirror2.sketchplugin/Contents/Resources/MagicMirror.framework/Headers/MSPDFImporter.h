//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSImporter.h"

@class MSPDFScanner, NSString;

@interface MSPDFImporter : NSObject <MSImporter>
{
    id <PDFParser> _parser;
    MSPDFScanner *_scanner;
    NSString *_type;
}

+ (id)epsImporter;
+ (id)pdfImporter;

- (void)finishImporting;
- (id)firstPhaseSubtitle;
- (id)importAsLayer;
- (void)importIntoGroup:(id)arg1 name:(id)arg2 images:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)init;
- (id)name;
@property(retain, nonatomic) id <PDFParser> parser; // @synthesize parser=_parser;
- (unsigned long long)prepareToImportFromData:(id)arg1;
- (unsigned long long)prepareToImportFromURL:(id)arg1;
@property(retain, nonatomic) MSPDFScanner *scanner; // @synthesize scanner=_scanner;
- (id)secondPhaseSubtitleForValue:(long long)arg1 maximum:(long long)arg2;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (BOOL)shouldCollapseSinglePage;
- (BOOL)shouldExpandPages;
- (id)unwrappedLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

