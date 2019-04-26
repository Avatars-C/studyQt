#include "qcombobox_and_qplaintextedit.h"
#include "ui_qcombobox_and_qplaintextedit.h"

QComboBox_And_QPlainTextEdit::QComboBox_And_QPlainTextEdit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QComboBox_And_QPlainTextEdit)
{
    ui->setupUi(this);
}

QComboBox_And_QPlainTextEdit::~QComboBox_And_QPlainTextEdit()
{
    delete ui;
}

void QComboBox_And_QPlainTextEdit::on_btnInitItem_clicked()
{
    //"初始化列表"按键
    QIcon icon;
    icon.addFile(":/QComboBoxAndQPlainTextEdit/shanghai.jpeg");
    //icon.addFile("C:\Qt\MyProject\Qt_study\demo\QComboBoxAndQPlainTextEdit\shanghai.jpeg");
    ui->comboBox->clear();  //清除列表
    QStringList strList;
    strList <<"北京"<<"上海"<<"天津"<<"河北省"<<"山东省"<<"山西省";
    ui->comboBox->addItems(strList);
    for (int i=0; i<20; i++) {
    ui->comboBox->addItem(icon,QString::asprintf("Item %d" ,i));
    }
}


void QComboBox_And_QPlainTextEdit::on_btnInit2_clicked()
{
    //初始化具有自定义数据的comboBox
    //Qmap自动根据 key排序
    //QStringList strlist = ;
    QMap<QString ,int> CityZone;
    for(int i=0;i<20;i++){
//        char pchar;
//        sprintf(pchar,"%c",i);
//        itoa(i,pchar,10);

       //<----进行字符转换---->
        std::string res;
        std::stringstream ss;
        ss<<i;
        ss>>res;
        res="City"+res;
        QString res1=QString::fromStdString(res);
        //<----end---->
        CityZone.insert(res1,i);
    }
    ui->comboBox_2->clear();
    foreach(const QString &str,CityZone.keys())
        ui->comboBox_2->addItem(str,CityZone.value(str));

}

void QComboBox_And_QPlainTextEdit::on_comboBox_currentIndexChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1);
}

void QComboBox_And_QPlainTextEdit::on_comboBox_2_currentIndexChanged(const QString &arg1)
{

    ui->plainTextEdit->appendPlainText(arg1);
}

void QComboBox_And_QPlainTextEdit::on_btnToComboBox_clicked()
{
    //plainTextEdit的内容逐行添加为ComboBox的项
    QTextDocument* doc = ui->plainTextEdit->document(); //文本对象
    int cnt = doc->blockCount();//回车符是一个block
    QIcon icon(":/QComboBoxAndQPlainTextEdit/shanghai.jpeg");
    ui->comboBox->clear();
    for(int i=0; i<cnt; i++){
        QTextBlock textLine=doc->findBlockByNumber(i); //文本中的一段
        QString str = textLine.text();
        ui->comboBox->addItem(icon,str);
    }
}

void QComboBox_And_QPlainTextEdit::on_plainTextEdit_customContextMenuRequested(const QPoint &pos)
{
    //创建并显示标准弹出式菜单
    QMenu* menu=ui->plainTextEdit->createStandardContextMenu();
    menu->exec(pos);
}
