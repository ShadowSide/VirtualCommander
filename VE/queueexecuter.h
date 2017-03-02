#ifndef QUEUEEXECUTER_H
#define QUEUEEXECUTER_H


class QueueExecuter: public IQueueExecuter
{
public:
    QueueExecuter();

private:
    std::shared_ptr<IQueueExecuter> _subExecuter;
};

#endif // QUEUEEXECUTER_H
