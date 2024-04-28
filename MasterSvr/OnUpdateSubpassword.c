#include "MasterDB.h"
#include "IPCProtocol.h"
#include "IPCProcedures.h"

IPC_PROCEDURE_BINDING(W2M, UPDATE_SUBPASSWORD) {
	Account->AccountID = Packet->AccountID;
	if (!MasterDBGetOrCreateAccount(Context->Database, Account)) return;

	memcpy(Account->CharacterPassword, Packet->CharacterPassword, MAX_SUBPASSWORD_LENGTH);
	Account->CharacterQuestion = Packet->CharacterQuestion;
	memcpy(Account->CharacterAnswer, Packet->CharacterAnswer, MAX_SUBPASSWORD_ANSWER_LENGTH);

	MasterDBUpdateAccountCharacterPassword(Context->Database, Account);
}