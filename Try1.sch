<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_39" />
        <signal name="XLXN_40" />
        <signal name="InputUp" />
        <signal name="XLXN_43" />
        <signal name="XLXN_44" />
        <signal name="XLXN_45" />
        <signal name="InputBottom" />
        <signal name="OutNand" />
        <signal name="OutAnd" />
        <signal name="OutOr" />
        <signal name="OutNor" />
        <port polarity="Input" name="InputUp" />
        <port polarity="Input" name="InputBottom" />
        <port polarity="Output" name="OutNand" />
        <port polarity="Output" name="OutAnd" />
        <port polarity="Output" name="OutOr" />
        <port polarity="Output" name="OutNor" />
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="nand2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="216" y1="-96" y2="-96" x1="256" />
            <circle r="12" cx="204" cy="-96" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
        </blockdef>
        <blockdef name="nor2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="216" y1="-96" y2="-96" x1="256" />
            <circle r="12" cx="204" cy="-96" />
            <arc ex="192" ey="-96" sx="112" sy="-48" r="88" cx="116" cy="-136" />
            <arc ex="112" ey="-144" sx="192" sy="-96" r="88" cx="116" cy="-56" />
            <arc ex="48" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <line x2="48" y1="-48" y2="-48" x1="112" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
        </blockdef>
        <blockdef name="or2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="192" ey="-96" sx="112" sy="-48" r="88" cx="116" cy="-136" />
            <arc ex="48" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
            <arc ex="112" ey="-144" sx="192" sy="-96" r="88" cx="116" cy="-56" />
            <line x2="48" y1="-48" y2="-48" x1="112" />
        </blockdef>
        <block symbolname="and2" name="XLXI_1">
            <blockpin signalname="InputBottom" name="I0" />
            <blockpin signalname="InputUp" name="I1" />
            <blockpin signalname="OutAnd" name="O" />
        </block>
        <block symbolname="nor2" name="XLXI_3">
            <blockpin signalname="InputBottom" name="I0" />
            <blockpin signalname="InputUp" name="I1" />
            <blockpin signalname="OutNor" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_4">
            <blockpin signalname="InputBottom" name="I0" />
            <blockpin signalname="InputUp" name="I1" />
            <blockpin signalname="OutOr" name="O" />
        </block>
        <block symbolname="nand2" name="XLXI_2">
            <blockpin signalname="InputBottom" name="I0" />
            <blockpin signalname="InputUp" name="I1" />
            <blockpin signalname="OutNand" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="512" y="752" name="XLXI_2" orien="R0" />
        <instance x="512" y="1008" name="XLXI_1" orien="R0" />
        <instance x="512" y="1280" name="XLXI_4" orien="R0" />
        <instance x="512" y="1520" name="XLXI_3" orien="R0" />
        <branch name="InputUp">
            <wire x2="192" y1="976" y2="976" x1="144" />
            <wire x2="224" y1="976" y2="976" x1="192" />
            <wire x2="192" y1="976" y2="1392" x1="192" />
            <wire x2="512" y1="1392" y2="1392" x1="192" />
            <wire x2="512" y1="624" y2="624" x1="224" />
            <wire x2="224" y1="624" y2="880" x1="224" />
            <wire x2="512" y1="880" y2="880" x1="224" />
            <wire x2="224" y1="880" y2="944" x1="224" />
            <wire x2="224" y1="944" y2="976" x1="224" />
            <wire x2="288" y1="944" y2="944" x1="224" />
            <wire x2="288" y1="944" y2="1152" x1="288" />
            <wire x2="512" y1="1152" y2="1152" x1="288" />
        </branch>
        <branch name="InputBottom">
            <wire x2="288" y1="1216" y2="1216" x1="144" />
            <wire x2="352" y1="1216" y2="1216" x1="288" />
            <wire x2="400" y1="1216" y2="1216" x1="352" />
            <wire x2="512" y1="1216" y2="1216" x1="400" />
            <wire x2="288" y1="1216" y2="1456" x1="288" />
            <wire x2="512" y1="1456" y2="1456" x1="288" />
            <wire x2="512" y1="944" y2="944" x1="352" />
            <wire x2="352" y1="944" y2="1216" x1="352" />
            <wire x2="512" y1="688" y2="688" x1="400" />
            <wire x2="400" y1="688" y2="1216" x1="400" />
        </branch>
        <branch name="OutNand">
            <wire x2="800" y1="656" y2="656" x1="768" />
        </branch>
        <iomarker fontsize="28" x="800" y="656" name="OutNand" orien="R0" />
        <branch name="OutAnd">
            <wire x2="800" y1="912" y2="912" x1="768" />
        </branch>
        <iomarker fontsize="28" x="800" y="912" name="OutAnd" orien="R0" />
        <branch name="OutOr">
            <wire x2="800" y1="1184" y2="1184" x1="768" />
        </branch>
        <iomarker fontsize="28" x="800" y="1184" name="OutOr" orien="R0" />
        <branch name="OutNor">
            <wire x2="800" y1="1424" y2="1424" x1="768" />
        </branch>
        <iomarker fontsize="28" x="800" y="1424" name="OutNor" orien="R0" />
        <iomarker fontsize="28" x="144" y="976" name="InputUp" orien="R180" />
        <iomarker fontsize="28" x="144" y="1216" name="InputBottom" orien="R180" />
    </sheet>
</drawing>