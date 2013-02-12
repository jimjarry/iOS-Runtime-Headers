/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3SectionCollator, NSMutableArray;

@interface ML3SectionCollatorLanguage : NSObject {
    unsigned short *_endCharacterCharacters;
    BOOL _endCharacterIsInclusive;
    NSUInteger _endCharacterLength;
    unsigned short *_firstCharacterCharacters;
    NSUInteger _firstCharacterLength;
    NSUInteger _languageIndex;
    ML3SectionCollator *_sectionCollator;
    NSMutableArray *_sections;
    NSUInteger _startingSectionIndex;
}

@property(readonly) NSArray *sections;
@property(readonly) NSUInteger languageIndex;
@property(readonly) NSUInteger startingSectionIndex;

- (NSInteger)compare:(id)arg1;
- (BOOL)containsCharacters:(const unsigned short*)arg1 length:(NSUInteger)arg2;
- (void)dealloc;
- (id)initWithSectionHeadersDictionary:(id)arg1 languageIndex:(NSUInteger)arg2 startingSectionIndex:(NSUInteger)arg3 sectionCollator:(id)arg4;
- (NSUInteger)languageIndex;
- (id)sectionForCharacters:(const unsigned short*)arg1 length:(NSUInteger)arg2;
- (NSUInteger)sectionIndexForCharacters:(const unsigned short*)arg1 length:(NSUInteger)arg2;
- (id)sections;
- (NSUInteger)startingSectionIndex;

@end