object databaseWindow: TdatabaseWindow
  Left = 0
  Top = 0
  Caption = 'Trenutno se koristi: BazaPodataka.mdb'
  ClientHeight = 474
  ClientWidth = 947
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 640
    Top = 19
    Width = 273
    Height = 120
    DataSource = DZaposlenici
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        Width = 24
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Ime'
        Width = 65
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Prezime'
        Width = 75
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'IDPoslovnice'
        Width = 70
        Visible = True
      end>
  end
  object DBGrid2: TDBGrid
    Left = 319
    Top = 19
    Width = 305
    Height = 120
    DataSource = DPoslovnice
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        Width = 22
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Naziv'
        Width = 90
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Adresa'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'IDGrada'
        Width = 70
        Visible = True
      end>
  end
  object DBGrid4: TDBGrid
    Left = 26
    Top = 19
    Width = 279
    Height = 120
    DataSource = DGradovi
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        Width = 20
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'NazivGrada'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'PostanskiBroj'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'IDDr'#382'ave'
        Width = 60
        Visible = True
      end>
  end
  object GroupBox1: TGroupBox
    Left = 26
    Top = 158
    Width = 279
    Height = 305
    Caption = 'Tablica gradova'
    TabOrder = 3
    object Label1: TLabel
      Left = 18
      Top = 28
      Width = 11
      Height = 13
      Caption = 'ID'
      FocusControl = DBEdit1
    end
    object Label2: TLabel
      Left = 16
      Top = 74
      Width = 55
      Height = 13
      Caption = 'NazivGrada'
      FocusControl = DBEdit2
    end
    object Label3: TLabel
      Left = 17
      Top = 116
      Width = 64
      Height = 13
      Caption = 'PostanskiBroj'
      FocusControl = DBEdit3
    end
    object Label6: TLabel
      Left = 18
      Top = 158
      Width = 45
      Height = 13
      Caption = 'IDDr'#382'ave'
    end
    object DBEdit1: TDBEdit
      Left = 87
      Top = 28
      Width = 40
      Height = 21
      DataField = 'ID'
      DataSource = DGradovi
      TabOrder = 0
    end
    object DBEdit2: TDBEdit
      Left = 87
      Top = 73
      Width = 134
      Height = 21
      DataField = 'NazivGrada'
      DataSource = DGradovi
      TabOrder = 1
    end
    object DBEdit3: TDBEdit
      Left = 87
      Top = 116
      Width = 134
      Height = 21
      DataField = 'PostanskiBroj'
      DataSource = DGradovi
      TabOrder = 2
    end
    object DBLookupComboBox1: TDBLookupComboBox
      Left = 87
      Top = 159
      Width = 60
      Height = 21
      DataField = 'IDDr'#382'ave'
      DataSource = DGradovi
      KeyField = 'ID'
      ListSource = DDržave
      TabOrder = 3
    end
    object editSearch: TEdit
      Left = 16
      Top = 207
      Width = 121
      Height = 21
      TabOrder = 4
    end
    object buttonSearch: TButton
      Left = 143
      Top = 207
      Width = 97
      Height = 26
      Caption = 'Pretra'#382'i grad'
      TabOrder = 5
      OnClick = buttonSearchClick
    end
    object DBNavigator1: TDBNavigator
      Left = 16
      Top = 248
      Width = 240
      Height = 41
      DataSource = DGradovi
      TabOrder = 6
    end
  end
  object GroupBox2: TGroupBox
    Left = 319
    Top = 158
    Width = 305
    Height = 305
    Caption = 'Tablica Poslovnice'
    TabOrder = 4
    object Label4: TLabel
      Left = 24
      Top = 28
      Width = 11
      Height = 13
      Caption = 'ID'
      FocusControl = DBEdit4
    end
    object Label5: TLabel
      Left = 24
      Top = 69
      Width = 26
      Height = 13
      Caption = 'Naziv'
      FocusControl = DBEdit5
    end
    object Label7: TLabel
      Left = 24
      Top = 116
      Width = 34
      Height = 13
      Caption = 'Adresa'
      FocusControl = DBEdit6
    end
    object Label8: TLabel
      Left = 16
      Top = 160
      Width = 40
      Height = 13
      Caption = 'IDGrada'
      FocusControl = DBEdit7
    end
    object DBEdit4: TDBEdit
      Left = 72
      Top = 25
      Width = 40
      Height = 21
      DataField = 'ID'
      DataSource = DPoslovnice
      TabOrder = 0
    end
    object DBEdit5: TDBEdit
      Left = 72
      Top = 66
      Width = 200
      Height = 21
      DataField = 'Naziv'
      DataSource = DPoslovnice
      TabOrder = 1
    end
    object DBEdit6: TDBEdit
      Left = 72
      Top = 113
      Width = 200
      Height = 21
      DataField = 'Adresa'
      DataSource = DPoslovnice
      TabOrder = 2
    end
    object DBEdit7: TDBEdit
      Left = 72
      Top = 160
      Width = 40
      Height = 21
      DataField = 'IDGrada'
      DataSource = DPoslovnice
      TabOrder = 3
    end
    object DBNavigator2: TDBNavigator
      Left = 32
      Top = 248
      Width = 240
      Height = 41
      DataSource = DPoslovnice
      TabOrder = 4
    end
    object buttonExport: TButton
      Left = 25
      Top = 208
      Width = 256
      Height = 25
      Caption = 'Izgeneriraj izvje'#353'taj odabrane poslovnice'
      TabOrder = 5
      OnClick = buttonExportClick
    end
  end
  object GroupBox3: TGroupBox
    Left = 640
    Top = 158
    Width = 273
    Height = 305
    Caption = 'GroupBox3'
    TabOrder = 5
    object Label9: TLabel
      Left = 16
      Top = 28
      Width = 11
      Height = 13
      Caption = 'ID'
      FocusControl = DBEdit8
    end
    object Label10: TLabel
      Left = 16
      Top = 69
      Width = 18
      Height = 13
      Caption = 'Ime'
      FocusControl = DBEdit9
    end
    object Label11: TLabel
      Left = 16
      Top = 116
      Width = 37
      Height = 13
      Caption = 'Prezime'
      FocusControl = DBEdit10
    end
    object Label12: TLabel
      Left = 16
      Top = 160
      Width = 61
      Height = 13
      Caption = 'IDPoslovnice'
      FocusControl = DBEdit11
    end
    object DBEdit8: TDBEdit
      Left = 88
      Top = 25
      Width = 40
      Height = 21
      DataField = 'ID'
      DataSource = DZaposlenici
      TabOrder = 0
    end
    object DBEdit9: TDBEdit
      Left = 72
      Top = 66
      Width = 73
      Height = 21
      DataField = 'Ime'
      DataSource = DZaposlenici
      TabOrder = 1
    end
    object DBEdit10: TDBEdit
      Left = 88
      Top = 113
      Width = 161
      Height = 21
      DataField = 'Prezime'
      DataSource = DZaposlenici
      TabOrder = 2
    end
    object DBEdit11: TDBEdit
      Left = 91
      Top = 160
      Width = 40
      Height = 21
      DataField = 'IDPoslovnice'
      DataSource = DZaposlenici
      TabOrder = 3
    end
    object Button1: TButton
      Left = 11
      Top = 208
      Width = 129
      Height = 25
      Caption = 'Izbri'#353'i odabranog radnika'
      TabOrder = 4
      OnClick = Button1Click
    end
    object buttonAddPero: TButton
      Left = 146
      Top = 208
      Width = 111
      Height = 25
      Caption = 'Dodaj radnika Pero'
      TabOrder = 5
      OnClick = buttonAddPeroClick
    end
    object DBNavigator3: TDBNavigator
      Left = 16
      Top = 248
      Width = 240
      Height = 41
      DataSource = DZaposlenici
      TabOrder = 6
    end
    object buttonSort: TButton
      Left = 151
      Top = 64
      Width = 98
      Height = 25
      Caption = 'Sortiraj po imenu'
      TabOrder = 7
      OnClick = buttonSortClick
    end
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=D:\GitHub\vLonac-NT' +
      'P---Projekt\database.mdb;Mode=ReadWrite;Persist Security Info=Fa' +
      'lse'
    LoginPrompt = False
    Mode = cmReadWrite
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 16
    Top = 8
  end
  object TZaposlenici: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'IDPoslovnice'
    MasterFields = 'ID'
    MasterSource = DPoslovnice
    TableName = 'Zaposlenici'
    Left = 104
    Top = 8
    object TZaposleniciID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object TZaposleniciIme: TWideStringField
      FieldName = 'Ime'
      Size = 255
    end
    object TZaposleniciPrezime: TWideStringField
      FieldName = 'Prezime'
      Size = 255
    end
    object TZaposleniciIDPoslovnice: TIntegerField
      FieldName = 'IDPoslovnice'
    end
  end
  object DZaposlenici: TDataSource
    DataSet = TZaposlenici
    Left = 192
    Top = 8
  end
  object TPoslovnice: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'IDGrada'
    MasterFields = 'ID'
    MasterSource = DGradovi
    TableName = 'Poslovnice'
    Left = 272
    Top = 8
    object TPoslovniceID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object TPoslovniceNaziv: TWideStringField
      FieldName = 'Naziv'
      Size = 255
    end
    object TPoslovniceAdresa: TWideStringField
      FieldName = 'Adresa'
      Size = 255
    end
    object TPoslovniceIDGrada: TIntegerField
      FieldName = 'IDGrada'
    end
  end
  object DPoslovnice: TDataSource
    DataSet = TPoslovnice
    Left = 336
    Top = 8
  end
  object TGradovi: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Gradovi'
    Left = 424
    Top = 8
    object TGradoviID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object TGradoviNazivGrada: TWideStringField
      FieldName = 'NazivGrada'
      Size = 255
    end
    object TGradoviPostanskiBroj: TIntegerField
      FieldName = 'PostanskiBroj'
    end
    object TGradoviIDDržave: TIntegerField
      FieldName = 'IDDr'#382'ave'
    end
  end
  object DGradovi: TDataSource
    DataSet = TGradovi
    Left = 488
    Top = 8
  end
  object DDržave: TDataSource
    DataSet = TDržave
    Left = 624
    Top = 8
  end
  object TDržave: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Dr'#382'ave'
    Left = 560
    Top = 8
  end
  object frxPoslovnice: TfrxDBDataset
    RangeBegin = rbCurrent
    RangeEnd = reCurrent
    UserName = 'frxPoslovnice'
    CloseDataSource = False
    DataSource = DPoslovnice
    BCDToCurrency = False
    Left = 80
    Top = 64
  end
  object frxZaposlenici: TfrxDBDataset
    UserName = 'frxZaposlenici'
    CloseDataSource = False
    DataSource = DZaposlenici
    BCDToCurrency = False
    Left = 80
    Top = 128
  end
  object frxPDFExport1: TfrxPDFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    OpenAfterExport = False
    PrintOptimized = False
    Outline = False
    Background = False
    HTMLTags = True
    Quality = 95
    Transparency = False
    Author = 'FastReport'
    Subject = 'FastReport PDF export'
    ProtectionFlags = [ePrint, eModify, eCopy, eAnnot]
    HideToolbar = False
    HideMenubar = False
    HideWindowUI = False
    FitWindow = False
    CenterWindow = False
    PrintScaling = False
    PdfA = False
    Left = 176
    Top = 64
  end
  object frxRTFExport1: TfrxRTFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    PictureType = gpPNG
    OpenAfterExport = False
    Wysiwyg = True
    Creator = 'FastReport'
    SuppressPageHeadersFooters = False
    HeaderFooterMode = hfText
    AutoSize = False
    Left = 176
    Top = 128
  end
  object frxReport1: TfrxReport
    Version = '6.2.1'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick, pbCopy, pbSelection]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44359.722164861100000000
    ReportOptions.LastChange = 44361.570016296300000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 16
    Top = 96
    Datasets = <
      item
        DataSet = frxPoslovnice
        DataSetName = 'frxPoslovnice'
      end
      item
        DataSet = frxZaposlenici
        DataSetName = 'frxZaposlenici'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210.000000000000000000
      PaperHeight = 297.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      Frame.Typ = []
      object ReportTitle1: TfrxReportTitle
        FillType = ftBrush
        Frame.Typ = []
        Height = 68.031540000000000000
        Top = 18.897650000000000000
        Width = 718.110700000000000000
        object Memo1: TfrxMemoView
          AllowVectorExport = True
          Left = 37.795300000000000000
          Top = 11.338590000000000000
          Width = 631.181510000000000000
          Height = 45.354360000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -32
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = []
          HAlign = haCenter
          Memo.UTF8W = (
            'Izvje'#353'taj o poslovnicama i zaposlenicima')
          ParentFont = False
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Frame.Typ = []
        Height = 45.354360000000000000
        Top = 147.401670000000000000
        Width = 718.110700000000000000
        DataSet = frxPoslovnice
        DataSetName = 'frxPoslovnice'
        RowCount = 0
        object frxPoslovniceID: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 11.338590000000000000
          Top = 11.338590000000000000
          Width = 41.574830000000000000
          Height = 18.897650000000000000
          DataField = 'ID'
          DataSet = frxPoslovnice
          DataSetName = 'frxPoslovnice'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = []
          Memo.UTF8W = (
            '[frxPoslovnice."ID"]')
          ParentFont = False
        end
        object frxPoslovniceNaziv: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 71.811070000000000000
          Top = 11.338590000000000000
          Width = 143.621969130000000000
          Height = 18.897650000000000000
          DataField = 'Naziv'
          DataSet = frxPoslovnice
          DataSetName = 'frxPoslovnice'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = []
          Memo.UTF8W = (
            '[frxPoslovnice."Naziv"]')
          ParentFont = False
        end
        object frxPoslovniceAdresa: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 230.551330000000000000
          Top = 11.338590000000000000
          Width = 185.196970000000000000
          Height = 18.897650000000000000
          DataField = 'Adresa'
          DataSet = frxPoslovnice
          DataSetName = 'frxPoslovnice'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = []
          Memo.UTF8W = (
            '[frxPoslovnice."Adresa"]')
          ParentFont = False
        end
      end
      object DetailData1: TfrxDetailData
        FillType = ftBrush
        Frame.Typ = []
        Height = 49.133890000000000000
        Top = 215.433210000000000000
        Width = 718.110700000000000000
        DataSet = frxZaposlenici
        DataSetName = 'frxZaposlenici'
        RowCount = 0
        object frxZaposleniciIme: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 68.031540000000000000
          Top = 15.118120000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          DataField = 'Ime'
          DataSet = frxZaposlenici
          DataSetName = 'frxZaposlenici'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Bahnschrift'
          Font.Style = [fsBold]
          Frame.Typ = []
          Memo.UTF8W = (
            '[frxZaposlenici."Ime"]')
          ParentFont = False
        end
        object frxZaposleniciPrezime: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 147.401670000000000000
          Top = 15.118120000000000000
          Width = 173.858380000000000000
          Height = 18.897650000000000000
          DataField = 'Prezime'
          DataSet = frxZaposlenici
          DataSetName = 'frxZaposlenici'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Bahnschrift'
          Font.Style = [fsBold]
          Frame.Typ = []
          Memo.UTF8W = (
            '[frxZaposlenici."Prezime"]')
          ParentFont = False
        end
        object frxZaposleniciID: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 11.338590000000000000
          Top = 15.118120000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          DataField = 'ID'
          DataSet = frxZaposlenici
          DataSetName = 'frxZaposlenici'
          Frame.Typ = []
          Memo.UTF8W = (
            '[frxZaposlenici."ID"]')
        end
      end
    end
  end
end
