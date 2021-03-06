/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "PBRootObject.h"
//#import "NSCoding-Protocol.h"
//#import "NSCopying-Protocol.h"
//#import "NSMutableCopying-Protocol.h"
//#import "PBMutableArrayDelegate-Protocol.h"

@class NSMutableDictionary, PBExtensionField, PBFieldDescriptor, PBUnknownFieldSet;

@interface PBGeneratedMessage : NSObject //PBRootObject <NSCoding, NSCopying, NSMutableCopying, PBMutableArrayDelegate>
{
    struct PBGeneratedMessage_Storage *messageStorage_;
    int readOnlyMutex_;
    PBUnknownFieldSet *unknownFields_;
    NSMutableDictionary *extensionMap_;
    NSMutableDictionary *autocreatedExtensionMap_;
    PBGeneratedMessage *autocreator_;
    PBFieldDescriptor *autocreatorField_;
    PBExtensionField *autocreatorExtension_;
}

+ (id)builder;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)messageWithAutocreator:(id)arg1 extension:(id)arg2;
+ (id)messageWithAutocreator:(id)arg1 field:(id)arg2;
+ (id)message;
+ (id)descriptor;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (void)setLogProtosAsObjC:(BOOL)arg1;
@property(retain, nonatomic) PBUnknownFieldSet *unknownFields; // @synthesize unknownFields=unknownFields_;
- (id)build;
- (id)builder;
- (void)pbMutableArray:(id)arg1 willAddElements:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long)serializedSize;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (BOOL)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(int)arg3;
- (void)mergeUnknownFields:(id)arg1;
- (id)mutableUnknownFields;
- (void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (void)becomeVisibleToAutocreator;
- (BOOL)wasAutocreatedBy:(id)arg1;
- (void)clearAutocreator;
- (void)clearExtension:(id)arg1;
- (void)setExtension:(id)arg1 index:(unsigned int)arg2 value:(id)arg3;
- (void)addExtension:(id)arg1 value:(id)arg2;
- (void)setExtension:(id)arg1 value:(id)arg2;
- (unsigned long)extensionsSerializedSize;
- (id)sortedExtensionsInUse;
- (void)writeExtensionsToCodedOutputStream:(id)arg1 range:(id)arg2;
- (id)extensionsCurrentlySet;
- (BOOL)hasExtension:(id)arg1;
- (void)checkExtension:(id)arg1;
- (id)getExtension:(id)arg1;
- (BOOL)isInitialized:(id)arg1;
- (void)writeField:(id)arg1 toCodedOutputStream:(id)arg2;
- (void)writeDelimitedToCodedOutputStream:(id)arg1;
- (void)writeDelimitedToOutputStream:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)writeToOutputStream:(id)arg1;
- (id)delimitedData;
- (id)data;
- (id)descriptor;
@property(readonly, nonatomic, getter=isInitialized) BOOL initialized;
- (void)internalClear;
- (void)clear;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyFieldsInto:(id)arg1 zone:(struct _NSZone *)arg2;
- (void)dealloc;
- (id)init;
- (id)serializeForLogs;

@end

