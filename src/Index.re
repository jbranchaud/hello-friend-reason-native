let run = () => {
    print_string("What's your name? ");
    flush(stdout);
    
    let name = switch(String.trim(input_line(stdin))) {
    | "" => "friend"
    | name => name
    };

    print_endline(Printf.sprintf("Hello, %s!", name));
};

run();