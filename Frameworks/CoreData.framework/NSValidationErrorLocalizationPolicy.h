/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSBundle, NSString, NSDictionary, NSURL;



@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying>
{
    NSURL *_url;
    NSBundle *_localizationBundle;
    NSString *_modelStringsFileName;
    NSDictionary *_localizationDictionary;
}


- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_ensureLocalizationDictionaryIsLoaded;
- (id)_localizedStringForKey:(id)arg1 value:(void*)arg2;
- (id)_cachedObjectForKey:(id)arg1 value:(void*)arg2;
- (id)localizationDictionary;
- (void)setLocalizationDictionary:(id)arg1;
- (id)localizedEntityNameForEntity:(id)arg1;
- (id)_localizedPropertyNameForProperty:(id)arg1 entity:(id)arg2;
- (id)localizedPropertyNameForProperty:(id)arg1;
- (id)localizedModelStringForKey:(id)arg1;

@end