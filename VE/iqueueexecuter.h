#ifndef IQUEUEEXECUTER_H
#define IQUEUEEXECUTER_H


struct IQueueExecuter
{
public:
    IQueueExecuter();
    virtual void EmitOp(const std::sharad_ptr<IOperationDesc>& desc) = 0;
    virtual void ExecuteSequence() = 0;
    virtual ~IQueueExecuter();
};

#endif // IQUEUEEXECUTER_H
