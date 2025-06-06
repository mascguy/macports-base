
[subsection Critcl]

The [syscmd critcl] tool is an [emph optional] dependency.

[para] It is only required when trying to build the C-based
[term accelerators] for a number of packages, as explained in
[sectref {Critcl & Accelerators}]

[para] [emph Beware]: The C accelerators are [emph {built by default}].

[para] For Unix Tcllib's build system ([cmd sak.tcl]) looks for it in
the [variable PATH], using the name [syscmd critcl].

[para] On Windows on the other hand the search is more complex.

       The build system looks first looks for a proper application
       [syscmd critcl.exe].

       When that is not found it looks for a combination of
       interpreter ([syscmd tclkitsh.exe], [syscmd tclsh.exe]) and
       starkit ([syscmd critcl.kit], [syscmd critcl]) instead.

       [emph Note] that the choice of starkit can be overriden via the
       environment variable [variable CRITCL].

[para] Tcllib 1.21 and older requires Critcl version 2 or higher.

[para] Tcllib 2.0 and newer on the other hand requires Critcl version 3.3 or higher.

[para] The [uri https://andreas-kupries.github.io/critcl Critcl]
provides these releases and the associated sources.

[para] Any branch of the repository can be used (if not using the
prebuild starkit or starpack), although the use of the stable branch
[emph master] is recommended.

[para] At the above url is also an explanation on how to build and
install Critcl, including a list of its dependencies.

[para] Its instructions will not be repeated here.

If there are problems with these directions please file a ticket
against the [term Critcl] project, and not Tcllib.
