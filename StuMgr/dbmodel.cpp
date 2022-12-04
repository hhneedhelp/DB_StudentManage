#include "dbmodel.h"

bool dbmodel::login(QString name, QString passwd){
        db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");  //连接本地主机
        db.setPort(3306);
        db.setDatabaseName("stumgr");//数据库名
        db.setUserName(name);
        db.setPassword(passwd);
        bool ok = db.open();
        return ok;
}

QStringList dbmodel::inquire(QString table){
    query=new QSqlQuery(db);
    if(query->exec("select * from `stumgr`.`" + table + "`")){
        QStringList r;
        while(query->next()){
            for(int i=0;i<5;i++)
                r<<query->value(i).toString();
        }
        return r;
    }else
        qDebug()<<query->lastError();
}

bool dbmodel::addstu(QString SNo,QString SName,QString SSex,QString SAge){
    query=new QSqlQuery(db);
    if(SNo == nullptr)
        return 0;
    return query->exec("insert into `stumgr`.`student`(`SNo`,`SName`,`Sex`,`SAge`)values('"+SNo+"','"+SName+"','"+SSex+"','"+SAge+"')");
}

bool dbmodel::delstu(QString SNo){
    query=new QSqlQuery(db);
    if(SNo == nullptr)
        return 0;
    return query->exec("delete from `stumgr`.`student`where SNo = '"+SNo+"'");

}

bool dbmodel::addtea(QString TNo,QString TName){
    query=new QSqlQuery(db);
    if(TNo == nullptr)
        return 0;
    return query->exec("insert into `stumgr`.`teacher`(`TNo`,`TName`)values('"+TNo+"','"+TName+"')");
}

bool dbmodel::deltea(QString TNo){
    query=new QSqlQuery(db);
    if(TNo == nullptr)
        return 0;
    return query->exec("delete from `stumgr`.`teacher`where TNo = '"+TNo+"'");

}

bool dbmodel::addcou(QString CNo,QString CName,QString TNo){
    query=new QSqlQuery(db);
    if(CNo == nullptr)
        return 0;
    return query->exec("insert into `stumgr`.`course`(`CNo`,`CName`,`TNo`)values('"+CNo+"','"+CName+"','"+TNo+"')");
}

bool dbmodel::delcou(QString CNo){
    query=new QSqlQuery(db);
    if(CNo == nullptr)
        return 0;
    return query->exec("delete from `stumgr`.`course`where CNo = '"+CNo+"'");
}

bool dbmodel::addsc(QString SNo,QString CNo,QString Score){
    query=new QSqlQuery(db);
    if(CNo == nullptr)
        return 0;
    return query->exec("insert into `stumgr`.`sc`(`SNo`,`CNo`,`Score`)values('"+SNo+"','"+CNo+"','"+Score+"')");
}

bool dbmodel::delsc(QString SNo,QString CNo){
    query=new QSqlQuery(db);
    if(CNo == nullptr)
        return 0;
    return query->exec("delete from `stumgr`.`sc`where CNo = '"+CNo+"' and SNo = '"+SNo+"'");
}

bool dbmodel::update(QString table,QString column,QString row, QString colvalue, QString rowvalue){
    query=new QSqlQuery(db);

    table=dbmodel::transition(table);
    row=dbmodel::transition(row);
    column=dbmodel::transition(column);

    string strexpr = "update `stumgr`.`"+table.toStdString()+"` set "+column.toStdString()+" = \""+qstr2str(colvalue)
                      +"\" where "+row.toStdString()+" = \""+rowvalue.toStdString()+"\"";
    cout<<strexpr<<endl;

    QString qstrexpr = str2qstr(strexpr);
    qDebug()<<qstrexpr;

    return query->exec(qstrexpr);
}

QString dbmodel::transition(QString str){
    if(str.compare("学生姓名")==0)
        return QString("SName");
    else if(str.compare("学生学号")==0)
        return QString("SNo");
    else if(str.compare("学生年龄")==0)
        return QString("SAge");
    else if(str.compare("学生性别")==0)
        return QString("Sex");
    else if(str.compare("课程编号")==0)
        return QString("CNo");
    else if(str.compare("课程名")==0)
        return QString("CName");
    else if(str.compare("得分")==0)
        return QString("Score");
    else if(str.compare("教师编号")==0)
        return QString("TNo");
    else if(str.compare("教师姓名")==0)
        return QString("TName");
    else if(str.compare("学生信息")==0)
        return QString("student");
    else if(str.compare("教师信息")==0)
        return QString("teacher");
    else if(str.compare("课程信息")==0)
        return QString("course");
    else if(str.compare("选课信息")==0)
        return QString("sc");

}

dbmodel::~dbmodel(){

    db.close();
}

dbmodel::dbmodel(){

}
