
#define CALLBACK

typedef struct
{
}videoInfo;
typedef struct
{
}audioInfo;
typedef struct
{
}errorInfo;
typedef struct
{
}channelInfo;

typedef void (CALLBACK videoCB) (const long dataHandle, const videoInfo* vIF, const char* data, const int dataLen, void* parameter);
typedef void (CALLBACK audioCB) (const long dataHandle, const audioInfo* aIF, const char* data, const int dataLen, void* parameter);
typedef void (CALLBACK errorCB) (const long msHandle, const errorInfo* eIF, void* parameter);
typedef void (CALLBACK channelInfoCB) (const long msHandle, const channelInfo** cIFL, void* parameter);

//���ӵ�������
bool Connect(long& msHandle);

//�Ͽ�����
bool Disconnect(const long msHandle);

//������Ƶ���ݻص�
bool SetVideoCallback(const long msHandle, videoCB* vCB, void* parameter);

//������Ƶ���ݻص�
bool SetAudioCallback(const long msHandle, audioCB* aCB, void* parameter);

//���ô�����Ϣ�ص�
bool SetErrorCallback(const long msHandle, errorCB* eCB, void* parameter);

//����ͨ����Ϣ�ص�
bool SetChannelInfoCallback(const long msHandle, channelInfoCB* ciCB, void* parameter);

//ʵʱ�㲥
bool PlayStream(const long msHandle, const channelInfo* cIF);

//ֹͣ�㲥
bool StopStream(const long msHandle, const channelInfo* cIF);

