#ifndef CSV_DOC_SIZEHINT_H
#define CSV_DOC_SIZEHINT_H

#include <QWidget>
#include <QSize>

namespace CSVDoc
{
    class SizeHintWidget : public QWidget
    {
            QSize mSize;

        public:
            SizeHintWidget(QWidget *parent = 0);
            ~SizeHintWidget();

            QSize sizeHint() const override;
            void setSizeHint(const QSize &size);
    };
}

#endif // CSV_DOC_SIZEHINT_H
