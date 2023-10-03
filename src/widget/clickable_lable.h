//一个自定义的label类，添加了相关的操作

#ifndef CLICKABLE_LABLE
#define CLICKABLE_LABLE

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
class ClickableLable : public QLabel {
	Q_OBJECT
public:
	explicit ClickableLable(QWidget* parent = nullptr);

signals:
	void clicked();

protected:
	virtual void mousePressEvent(QMouseEvent* event);//重写mousePressEvent事件
};

#endif // CLICKABLE_LABLE
