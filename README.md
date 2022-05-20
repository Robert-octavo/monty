<h1 class="gap">Stacks, Queues - LIFO, FIFO</h1>
<h2>Description</h2>
<p>Stacks are based on the LIFO principle, i.e., the element inserted at the last, is the first element to come out of the list. Queues are based on the FIFO principle, i.e., the element inserted at the first, is the first element to come out of the list. The goal of this project is to create an interpreter for Monty ByteCodes files. </p>

<h2>Project Status</h2>
<p>This project has some tasks that are strictly enforceable or mandatory, and others that are advanced. The mandatory ones are 100% complete and the advanced ones are at an average of 70%, the final goal is to complete the advanced ones at 100%.</p>


<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="Google" href="https://intranet.hbtn.io/rltoken/56-bDz7IrFgcH02EkGkB3w" target="_blank">Google</a></li>
<li><a title="How do I use extern to share variables between source files in C?" href="https://intranet.hbtn.io/rltoken/9neX6gaN6DoA-ow1INgZqw" target="_blank">How do I use extern to share variables between source files in C?</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/S9hXXmjvT8hvNyFQLnSGug" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What do LIFO and FIFO mean</li>
<li>What is a stack, and when to use it</li>
<li>What is a queue, and when to use it</li>
<li>What are the common implementations of stacks and queues</li>
<li>What are the most common use cases of stacks and queues</li>
<li>What is the proper way to use global variables</li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a title="betty-style.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank">betty-style.pl</a> and <a title="betty-doc.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You allowed to use a maximum of one global variable</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the C standard library</li>
<li>The prototypes of all your functions should be included in your header file called <code>monty.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>You are expected to do the tasks in the order shown in the project</li>
</ul>
<h3>GitHub</h3>
<p><strong>There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.</strong></p>
<h2>More Info</h2>
<h3>Data structures</h3>
<p>Please use the following data structures for this project. Don&rsquo;t forget to include them in your header file.</p>
<pre><code>/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
</code></pre>
<pre><code>/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
</code></pre>
<h3>Compilation &amp; Output</h3>
<ul>
<li>Your code will be compiled this way:</li>
</ul>
<pre><code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o monty
</code></pre>
<ul>
<li>Any output must be printed on <code>stdout</code></li>
<li>Any error message must be printed on <code>stderr</code>
<ul>
<li><a title="Here is a link to a GitHub repository" href="https://intranet.hbtn.io/rltoken/9RfVU4j7qVbFgGdMkpX2qA" target="_blank">Here is a link to a GitHub repository</a> that could help you making sure your errors are printed on <code>stderr</code></li>
</ul>
</li>
</ul>
<h3>Tests</h3>
<p>We strongly encourage you to work all together on a set of tests</p>
<h3>The Monty language</h3>
<p>Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.</p>
<p><strong>Monty byte code files</strong></p>
<p>Files containing Monty byte codes usually have the <code>.m</code> extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:</p>
<pre><code>julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
</code></pre>
<p>Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:</p>
<pre><code>julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
</code></pre>
<p><strong>The monty program</strong></p>
<ul>
<li>Usage: <code>monty file</code>
<ul>
<li>where <code>file</code> is the path to the file containing Monty byte code</li>
</ul>
</li>
<li>If the user does not give any file or more than one argument to your program, print the error message <code>USAGE: monty file</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
<li>If, for any reason, it&rsquo;s not possible to open the file, print the error message <code>Error: Can't open file &lt;file&gt;</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code>
<ul>
<li>where <code>&lt;file&gt;</code> is the name of the file</li>
</ul>
</li>
<li>If the file contains an invalid instruction, print the error message <code>L&lt;line_number&gt;: unknown instruction &lt;opcode&gt;</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code>
<ul>
<li>where is the line number where the instruction appears.</li>
<li>Line numbers always start at 1</li>
</ul>
</li>
<li>The monty program runs the bytecodes line by line and stop if either:
<ul>
<li>it executed properly every line of the file</li>
<li>it finds an error in the file</li>
<li>an error occured</li>
</ul>
</li>
<li>If you can&rsquo;t malloc anymore, print the error message <code>Error: malloc failed</code>, followed by a new line, and exit with status <code>EXIT_FAILURE</code>.</li>
<li>You have to use <code>malloc</code> and <code>free</code> and are not allowed to use any other function from <code>man malloc</code> (realloc, calloc, &hellip;)</li>
</ul>
<h2>Examples</h2>
<p>To run the monty program it is necessary to take into account the path where the files to be interpreted are located.<br />For the purposes of this example, the files are contained in the bytecodes directory, therefore the name of the folder and the name of the file must be separated by the slash symbol ( / ).</p>
<strong>./monty bytecodes/00.m</strong><br>
<p>The result of which will be as follows:</p>
3<br>
2<br>
1<br>
<br>
<strong>./monty bytecodes/12.m</strong><br>
The result of which will be as follows:<br>
3<br>
2<br>
1<br>
5<br>
1<br>
<br>
<h2>Bugs</h2>
<br>Here is a small list of bugs that were fixed. This program is still under review.<br>
<h2>Files</h2>
Files include are:<br>
README.md<br>
_add.c<br>
_div.c<br>
_free.c<br>
_mod.c<br>
_mul.c<br>
_nop.c<br>
_pall.c<br>
_pchar.c<br>
_pint.c<br>
_pop.c<br>
_pstr.c<br>
_push.c<br>
_sub.c<br>
_swap.c<br>
file_manipulation.c<br>
function_call.c<br>
get_function.c<br>
main.c<br>
monty<br>
monty.h<br>
new_node.c<br>
tokenizar.c<br>
<br>
<br>