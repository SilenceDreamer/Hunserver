#pragma once
class cClientInfo
{
public:
	cClientInfo();
	virtual ~cClientInfo();
	SOCKET				GetSocket();
	OverlappedEx		GetRecvOverEx();
	WSABUF*				GetRecvOverExWsabuf();
	OVERLAPPED*			GetRecvOverExOverlapped();
	SRWLOCK				GetSRWLock();
	int					GetId();
	bool				GetIsUse();
	
	void				SetIsUse(bool isUsed);
	void				SetId(int id);
	void				SetSocket(SOCKET socket);
	void				SetCurrPacketSize(int size);
	void				SetPrevPacketSize(int size);
	void				resetClient();

private:
	SOCKET				mClientSocket;
	OverlappedEx		mRecvOverlappedEx;
	SRWLOCK				mRWLock;
	int					mId;
	bool				mIsUse;
};

