object Form2: TForm2
  AlignWithMargins = True
  Left = 0
  Top = 0
  Caption = 'Melody training basic kit ver1.0'
  ClientHeight = 378
  ClientWidth = 537
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 327
    Width = 27
    Height = 13
    Caption = 'Loop:'
  end
  object Label2: TLabel
    Left = 119
    Top = 327
    Width = 36
    Height = 13
    Caption = 'Tempo:'
  end
  object Label3: TLabel
    Left = 200
    Top = 327
    Width = 28
    Height = 13
    Caption = 'b - #:'
  end
  object Label4: TLabel
    Left = 280
    Top = 327
    Width = 40
    Height = 13
    Caption = 'Pattern:'
  end
  object ComboBox1: TComboBox
    Left = 40
    Top = 56
    Width = 100
    Height = 21
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 40
    Top = 83
    Width = 100
    Height = 21
    TabOrder = 1
  end
  object Button1: TButton
    Left = 370
    Top = 344
    Width = 46
    Height = 25
    Caption = 'make'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 422
    Top = 344
    Width = 46
    Height = 25
    Caption = 'play'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 421
    Top = 8
    Width = 75
    Height = 25
    Caption = 'save'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 340
    Top = 8
    Width = 75
    Height = 25
    Caption = 'open'
    TabOrder = 5
    OnClick = Button4Click
  end
  object ComboBox2: TComboBox
    Left = 159
    Top = 56
    Width = 99
    Height = 21
    TabOrder = 6
  end
  object Edit2: TEdit
    Left = 159
    Top = 82
    Width = 99
    Height = 21
    TabOrder = 7
  end
  object Edit3: TEdit
    Left = 277
    Top = 82
    Width = 100
    Height = 21
    TabOrder = 8
  end
  object ComboBox3: TComboBox
    Left = 277
    Top = 55
    Width = 100
    Height = 21
    TabOrder = 9
  end
  object ComboBox21: TComboBox
    Left = 119
    Top = 346
    Width = 66
    Height = 21
    TabOrder = 10
  end
  object ComboBox20: TComboBox
    Left = 40
    Top = 346
    Width = 66
    Height = 21
    TabOrder = 11
    OnSelect = ComboBox20Select
  end
  object ComboBox4: TComboBox
    Left = 396
    Top = 55
    Width = 100
    Height = 21
    TabOrder = 12
  end
  object Edit4: TEdit
    Left = 396
    Top = 82
    Width = 100
    Height = 21
    TabOrder = 13
  end
  object Edit20: TEdit
    Left = 40
    Top = 8
    Width = 294
    Height = 21
    TabOrder = 14
    Text = 'data.txt'
  end
  object ComboBox5: TComboBox
    Left = 40
    Top = 124
    Width = 100
    Height = 21
    TabOrder = 15
  end
  object ComboBox6: TComboBox
    Left = 159
    Top = 124
    Width = 99
    Height = 21
    TabOrder = 16
  end
  object ComboBox7: TComboBox
    Left = 277
    Top = 124
    Width = 100
    Height = 21
    TabOrder = 17
  end
  object ComboBox8: TComboBox
    Left = 396
    Top = 124
    Width = 100
    Height = 21
    TabOrder = 18
  end
  object Edit5: TEdit
    Left = 40
    Top = 151
    Width = 100
    Height = 21
    TabOrder = 19
  end
  object Edit6: TEdit
    Left = 159
    Top = 151
    Width = 99
    Height = 21
    TabOrder = 20
  end
  object Edit7: TEdit
    Left = 277
    Top = 151
    Width = 100
    Height = 21
    TabOrder = 21
  end
  object Edit8: TEdit
    Left = 396
    Top = 151
    Width = 100
    Height = 21
    TabOrder = 22
  end
  object ComboBox9: TComboBox
    Left = 40
    Top = 196
    Width = 100
    Height = 21
    TabOrder = 23
  end
  object ComboBox10: TComboBox
    Left = 159
    Top = 196
    Width = 99
    Height = 21
    TabOrder = 24
  end
  object ComboBox11: TComboBox
    Left = 277
    Top = 196
    Width = 100
    Height = 21
    TabOrder = 25
  end
  object ComboBox12: TComboBox
    Left = 396
    Top = 196
    Width = 100
    Height = 21
    TabOrder = 26
  end
  object Edit9: TEdit
    Left = 40
    Top = 223
    Width = 100
    Height = 21
    TabOrder = 27
  end
  object Edit10: TEdit
    Left = 159
    Top = 223
    Width = 99
    Height = 21
    TabOrder = 28
  end
  object Edit11: TEdit
    Left = 277
    Top = 223
    Width = 100
    Height = 21
    TabOrder = 29
  end
  object Edit12: TEdit
    Left = 396
    Top = 223
    Width = 100
    Height = 21
    TabOrder = 30
  end
  object CheckBox1: TCheckBox
    Left = 40
    Top = 44
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 31
  end
  object ComboBox22: TComboBox
    Left = 200
    Top = 346
    Width = 66
    Height = 21
    TabOrder = 32
    OnSelect = ComboBox22Select
  end
  object CheckBox2: TCheckBox
    Left = 159
    Top = 44
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 33
  end
  object CheckBox3: TCheckBox
    Left = 277
    Top = 44
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 34
  end
  object CheckBox4: TCheckBox
    Left = 396
    Top = 44
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 35
  end
  object CheckBox5: TCheckBox
    Left = 40
    Top = 111
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 36
  end
  object CheckBox6: TCheckBox
    Left = 159
    Top = 112
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 37
  end
  object CheckBox7: TCheckBox
    Left = 277
    Top = 111
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 38
  end
  object CheckBox8: TCheckBox
    Left = 396
    Top = 112
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 39
  end
  object CheckBox9: TCheckBox
    Left = 40
    Top = 183
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 40
  end
  object CheckBox10: TCheckBox
    Left = 159
    Top = 184
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 41
  end
  object CheckBox11: TCheckBox
    Left = 277
    Top = 184
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 42
  end
  object CheckBox12: TCheckBox
    Left = 396
    Top = 184
    Width = 89
    Height = 14
    Checked = True
    State = cbChecked
    TabOrder = 43
  end
  object Button5: TButton
    Left = 474
    Top = 344
    Width = 46
    Height = 25
    Caption = 'stop'
    TabOrder = 44
    Visible = False
    OnClick = Button5Click
  end
  object Edit13: TEdit
    Left = 40
    Top = 296
    Width = 100
    Height = 21
    TabOrder = 45
  end
  object Edit14: TEdit
    Left = 159
    Top = 296
    Width = 99
    Height = 21
    TabOrder = 46
  end
  object Edit15: TEdit
    Left = 277
    Top = 296
    Width = 100
    Height = 21
    TabOrder = 47
  end
  object Edit16: TEdit
    Left = 397
    Top = 296
    Width = 100
    Height = 21
    TabOrder = 48
  end
  object CheckBox13: TCheckBox
    Left = 41
    Top = 255
    Width = 97
    Height = 17
    Checked = True
    State = cbChecked
    TabOrder = 49
  end
  object CheckBox14: TCheckBox
    Left = 159
    Top = 255
    Width = 97
    Height = 17
    Checked = True
    State = cbChecked
    TabOrder = 50
  end
  object CheckBox15: TCheckBox
    Left = 280
    Top = 256
    Width = 97
    Height = 17
    Checked = True
    State = cbChecked
    TabOrder = 51
  end
  object CheckBox16: TCheckBox
    Left = 398
    Top = 254
    Width = 97
    Height = 17
    Checked = True
    State = cbChecked
    TabOrder = 52
  end
  object ComboBox13: TComboBox
    Left = 40
    Top = 269
    Width = 100
    Height = 21
    TabOrder = 53
  end
  object ComboBox14: TComboBox
    Left = 159
    Top = 269
    Width = 99
    Height = 21
    TabOrder = 54
  end
  object ComboBox15: TComboBox
    Left = 277
    Top = 269
    Width = 100
    Height = 21
    TabOrder = 55
  end
  object ComboBox16: TComboBox
    Left = 397
    Top = 269
    Width = 99
    Height = 21
    TabOrder = 56
  end
  object ComboBox17: TComboBox
    Left = 280
    Top = 346
    Width = 79
    Height = 21
    TabOrder = 57
    Text = 'ComboBox17'
  end
end
