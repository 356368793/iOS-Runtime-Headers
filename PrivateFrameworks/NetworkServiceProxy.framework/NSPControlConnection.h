/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPControlConnection : NSObject {
    unsigned int  _flowIdentifier;
}

@property (readonly) unsigned int flowIdentifier;

- (void)fetchConnectionInfoWithCompletionHandler:(id /* block */)arg1;
- (unsigned int)flowIdentifier;
- (id)initFromConnection:(id)arg1;
- (id)initFromMetadata:(id)arg1;
- (id)initFromNWConnection:(id)arg1;
- (id)initFromStream:(id)arg1;
- (id)initFromTask:(id)arg1;

@end
