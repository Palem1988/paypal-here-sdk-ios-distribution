/**
 * PPRetailOfflinePaymentStatus.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: dist/transaction/OfflinePaymentStatus.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"


@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceConstants;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailNetworkRequest;
@class PPRetailNetworkResponse;
@class PPRetailSdkEnvironmentInfo;
@class PPRetailRetailInvoice;
@class PPRetailRetailInvoicePayment;
@class PPRetailBraintreeManager;
@class PPRetailSimulationManager;
@class PPRetailMerchantManager;
@class PPRetailCaptureHandler;
@class PPRetailTransactionContext;
@class PPRetailTransactionManager;
@class PPRetailTransactionBeginOptions;
@class PPRetailReceiptDestination;
@class PPRetailDeviceManager;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailOfflinePaymentStatus;
@class PPRetailOfflineTransactionRecord;
@class PPRetailTokenExpirationHandler;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailPaymentDevice;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailCardInsertedHandler;
@class PPRetailDeviceStatus;
@class PPRetailPayer;
@class PPRetailTransactionRecord;
@class PPRetailVaultRecord;
@class PPRetailAuthorizedTransaction;
@class PPRetailPage;
@class PPRetailDiscoveredCardReader;
@class PPRetailCardReaderScanAndDiscoverOptions;
@class PPRetailDeviceConnectorOptions;
@class PPRetailSimulationOptions;


/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * OfflinePaymentStatus provides the status info for a given offline payment transaction
 */
@interface PPRetailOfflinePaymentStatus : PPRetailObject

    /**
    * the id of the offline txn
    */
    @property (nonatomic,strong,nullable) NSString* id;
    /**
    * Show the create time of the offline txn
    */
    @property (nonatomic,strong,nullable) NSString* createTime;
    /**
    * the total amount of the offline txn
    */
    @property (nonatomic,strong,nullable) NSDecimalNumber* amount;
    /**
    * the card issuer of the card used for the txn
    */
    @property (nonatomic,strong,nullable) NSArray* cardIssuer;
    /**
    * the retry counter of the offline txn
    */
    @property (nonatomic,assign) int retry;
    /**
    * the error no of the offline txn after replaying it
    */
    @property (nonatomic,assign) int errNo;
    /**
    * the error message of the offline txn after replaying if failed
    */
    @property (nonatomic,assign) int errMessage;
    /**
    * the flag showing if the txn is declined during replay
    */
    @property (nonatomic,assign) BOOL isDeclined;
    /**
    * Show the expiry time of the offline txn
    */
    @property (nonatomic,strong,nullable) NSString* expiry;
    /**
    * of this transaction
    */
    @property (nonatomic,assign) PPRetailOfflineTransactionState state;
    /**
    * The invoice number of the offline tx
    */
    @property (nonatomic,strong,nullable) NSString* invoiceNumber;
    /**
    * The invoice id of the offline tx
    */
    @property (nonatomic,strong,nullable) NSString* invoiceId;
    /**
    * The transaction number of the offline tx
    */
    @property (nonatomic,strong,nullable) NSString* transactionNumber;
    /**
    * The latitude of the offline tx
    */
    @property (nonatomic,strong,nullable) NSString* latitude;
    /**
    * The longitude of the offline tx
    */
    @property (nonatomic,strong,nullable) NSString* longitude;
    /**
    * The invoice of the offline tx
    */
    @property (nonatomic,strong,nullable) PPRetailRetailInvoice* invoice;


    
      - (instancetype _Null_unspecified)init;
    
    







@end
