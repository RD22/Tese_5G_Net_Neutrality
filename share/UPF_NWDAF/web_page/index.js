let selectedValue_1;
let selectedValue_2;

window.addEventListener("DOMContentLoaded", function() {
    	const Protocol1Select = document.getElementById("Protocol_A");
    	const Protocol2Select = document.getElementById("Protocol_B");
	    
    	for (let i = 1; i < Protocol1Select.options.length; i++) {
      		Protocol1Select.options[i].disabled = true;
    	}
    
    	for (let i = 1; i < Protocol2Select.options.length; i++) {
      		Protocol2Select.options[i].disabled = true;
    	}
    	// Disable the default selected option in stream2Select
    	//const defaultOptionValue = stream1Select.options[0].value;
    	//const defaultOption = stream2Select.querySelector(`[value="${defaultOptionValue}"]`);
    	//defaultOption.disabled = true;
});

const button = document.getElementById("myButton");

    // Add an event listener to the document to listen for key press events
    document.addEventListener("keypress", function(event) {
      // Check if the pressed key is Enter (key code 13)
      if (event.keyCode === 13 || event.which === 13) {
        // Trigger the click event on the button
        handleSubscribeClick();
      }
    });
    
function handleCustomOption(CustomInputIP_src, CustomInputIP_dst, CustomInputProto, selectedValue) {
	if (selectedValue === "Custom") {
		CustomInputIP_src.querySelector("input").disabled = false;
		CustomInputIP_dst.querySelector("input").disabled = false;
		 	for (let i = 1; i < CustomInputProto.options.length; i++) {
      				CustomInputProto.options[i].disabled = false;
    			}
    	}    		
   
	else {
		CustomInputIP_src.querySelector("input").disabled = true;
		CustomInputIP_dst.querySelector("input").disabled = true;
		for (let i = 1; i < CustomInputProto.options.length; i++) {
      				CustomInputProto.options[i].disabled = true;
    		}
    		
    	}
}

// Function for Stream_A

function handleStream1Change(selectElement) {
	selectedValue_1 = selectElement.value;
	const stream2Select = document.getElementById("stream2");
	const CustomInputIP_src = document.getElementById("Custom_stream_A");
	const CustomInputIP_dst = document.getElementById("Custom_stream_A_dst");
	const CustomInputProto = document.getElementById("Protocol_A");
	
    	// Enable all options in stream2Select (to re-enable options)
	for (let i = 1; i < stream2Select.options.length; i++) {
        	stream2Select.options[i].disabled = false;
	}

    	// Disable the selected option in stream2Select
    	if (selectedValue_1 !== "Custom") {
      		const selectedOption = stream2Select.querySelector(`[value="${selectedValue_1}"]`);
      		selectedOption.disabled = true;
    	}
    
   	handleCustomOption(CustomInputIP_src, CustomInputIP_dst, CustomInputProto, selectedValue_1);
}

// Function for Stream B

function handleStream2Change(selectElement) {
    	selectedValue_2 = selectElement.value;
    	const stream1Select = document.getElementById("stream1");
    	const CustomInputIP_src = document.getElementById("Custom_stream_B");
    	const CustomInputIP_dst = document.getElementById("Custom_stream_B_dst");
    	const CustomInputProto = document.getElementById("Protocol_B");
    
    	// Enable all options in stream1Select (to re-enable options)
    	for (let i = 1; i < stream1Select.options.length; i++) {
     	 	stream1Select.options[i].disabled = false;
    	}

    	// Disable the selected option in stream1Select
    	if (selectedValue_2 !== "Custom") {
      		const selectedOption = stream1Select.querySelector(`[value="${selectedValue_2}"]`);
      		selectedOption.disabled = true;
    	}
    
    	handleCustomOption(CustomInputIP_src, CustomInputIP_dst, CustomInputProto, selectedValue_2);
}




// Functions to handle the subscribe button click

function buildUrl(stream1, stream2, CustomInputIP_A_src, CustomInputIP_A_dst, protocolA, CustomInputIP_B_src, CustomInputIP_B_dst ,protocolB, notificationCorrelationID, analyticsID, targetPeriod) {
  	let url = '/handler?action=Nnwdaf_AnalyticsSubscription_Subscribe';
		
		// Stream 1 and 2 are not custom
	if (stream1 !== "Custom" && stream2 !== "Custom") {
		url += '&stream1=' + encodeURIComponent(stream1);
	    	url += '&stream2=' + encodeURIComponent(stream2);
		
		// Stream 1 is custom, Stream 2 is not
	
	} else if (stream1 === "Custom" && stream2 !== "Custom") {
		const custom1 = `${CustomInputIP_A_src.value} && ${CustomInputIP_A_dst.value} && ${protocolA}`;
		url += '&stream1=' + encodeURIComponent(custom1);
		url += '&stream2=' + encodeURIComponent(stream2);
	
		// Stream 2 is custom, Stream 1 is not
	
	} else if (stream1 !== "Custom" && stream2 === "Custom") {
		const custom2 = `${CustomInputIP_B_src.value} && ${CustomInputIP_B_dst.value} && ${protocolB}`;
		url += '&stream1=' + encodeURIComponent(stream1);
		url += '&stream2=' + encodeURIComponent(custom2);
		
		// Both Streams are custom
			
	} else if (stream1 === "Custom" && stream2 === "Custom") {
		const custom1 = `${CustomInputIP_A_src.value} && ${CustomInputIP_A_dst.value} && ${protocolA}`;
		const custom2 = `${CustomInputIP_B_src.value} && ${CustomInputIP_B_dst.value} && ${protocolB}`;
		url += '&stream1=' + encodeURIComponent(custom1);
		url += '&stream2=' + encodeURIComponent(custom2);
	}

  		url += '&Notification_Correlation_ID=' + encodeURIComponent(notificationCorrelationID);
  		url += '&Analytics_ID=' + encodeURIComponent(analyticsID);
  		url += '&Target_Period=' + encodeURIComponent(targetPeriod);

  	return url;
}


function CheckCustomOption(stream, CustomInputIP_src, CustomInputIP_dst, valid_src, valid_dst, Protocol, number){
	if( stream === "Custom" ){
 	 	if (!valid_src){
			alert(`Please enter a valid source IP address with the format provided for flow ${number}`);
	    		return -1; // Exit the function without further processing
		} 
		
		else if (!valid_dst){
			alert(`Please enter a valid destination IP address with the format provided for flow ${number}`);
			return -1;
		}
		
		else if (Protocol === ""){
			alert(`Please select a protocol for flow ${number}`);
	    		return -1;  // Exit the function without further processing
		}	
		
		else if (CustomInputIP_src.value === "") {
			alert(`Please enter a valid source IP address with the format provided for flow ${number}`);
			return -1;
		}
		
		else if (CustomInputIP_dst.value === "") {
			alert(`Please enter a valid destination IP address with the format provided for flow ${number}`);
			return -1;
		}
		
	 }
	 else {
	 	return 0;
	 }
}

function handleSubscribeClick() {
	const stream1 = document.getElementById("stream1").value;       
	const stream2 = document.getElementById("stream2").value;
	const Notification_Correlation_ID=Math.random().toString(36).substr(2);
	const Analytics_ID = "Network Performance";
	const Target_Period = document.getElementById("target_period").value;
	let CustomInputIP_A_src;
	let CustomInputIP_B_src;
	let CustomInputIP_A_dst;
	let CustomInputIP_B_dst;
	let Protocol_A;
	let Protocol_B;
	// Check if two streams were chosen 
	if (stream1 === "" || stream2 === ""){
		alert('Please choose two streams to start.');
		return;
	}
	
	if(stream1 === "Custom" && stream2 !== "Custom"){
		CustomInputIP_A_src = document.getElementById("Custom_stream_A").querySelector('input');
		CustomInputIP_A_dst = document.getElementById("Custom_stream_A_dst").querySelector('input');
		let valid_src = CustomInputIP_A_src.checkValidity();
		let valid_dst =  CustomInputIP_A_dst.checkValidity();
		Protocol_A = document.getElementById("Protocol_A").value; 
		let CheckCustom1 = CheckCustomOption(stream1, CustomInputIP_A_src, CustomInputIP_A_dst, 
		valid_src, valid_dst ,Protocol_A, 1);	
		if (CheckCustom1 === -1){
			Protocol_A.disabled = false;
			return;
		}
	}
	
	else if (stream2 === "Custom" && stream1 !== "Custom" ){
		CustomInputIP_B_src = document.getElementById("Custom_stream_B").querySelector('input');
		CustomInputIP_B_dst = document.getElementById("Custom_stream_B_dst").querySelector('input');
		let valid_src = CustomInputIP_B_src.checkValidity();
		let valid_dst = CustomInputIP_B_dst.checkValidity();
		Protocol_B = document.getElementById("Protocol_B").value; // Get the selected value
		let CheckCustom2 = CheckCustomOption(stream2, valid_src, valid_dst, Protocol_B, 2);
		if (CheckCustom2 === -1){
			Protocol_B.disabled = false;
			return;
		}
	}
	
	else if(stream1 === "Custom" && stream2 === "Custom"){
		CustomInputIP_A_src = document.getElementById("Custom_stream_A").querySelector('input');
		CustomInputIP_A_dst = document.getElementById("Custom_stream_A_dst").querySelector('input');
		let valid_A = CustomInputIP_A.checkValidity();
		let valid_A_src = CustomInputIP_A_src.checkValidity();
		let valid_A_dst =  CustomInputIP_A_dst.checkValidity();
		Protocol_A = document.getElementById("Protocol_A").value; 
		let CheckCustom1 = CheckCustomOption(stream1, valid_A_src, valid_A_dst, Protocol_A, 1);	
		
		CustomInputIP_B_src = document.getElementById("Custom_stream_B").querySelector('input');
		CustomInputIP_B_dst = document.getElementById("Custom_stream_B_dst").querySelector('input');
		let valid_B_src = CustomInputIP_B_src.checkValidity();
		let valid_B_dst = CustomInputIP_B_dst.checkValidity();
		Protocol_B = document.getElementById("Protocol_B").value; // Get the selected value
		let CheckCustom2 = CheckCustomOption(stream2, valid_B_src, valid_B_dst, Protocol_B, 2);
		
		if (CheckCustom1 === -1 || CheckCustom2 === -1) {
			Protocol_A.disabled = false;
			Protocol_B.disabled = false;
			return;
		}
		if (CustomInputIP_A.value === CustomInputIP_B.value) {
			alert('Please choose two different valid IP addresses for the flows.');
			Protocol_A.disabled = false;
			Protocol_B.disabled = false;
			return ;
		}
	}
				
	// Check if the Target_Period value is a multiple of 5
	if (Target_Period % 5 !== 0) {
		alert('Please enter a number that is a multiple of 5.');
		Protocol_A.disabled = false;
		Protocol_B.disabled = false;
		return; // Exit the function without further processing
	}
	
	if (!Target_Period){
		alert('Please specify a averaging window');
		Protocol_A.disabled = false;
		Protocol_B.disabled = false;
		return; 
	}
	
	const url = buildUrl(stream1, stream2, CustomInputIP_A_src, CustomInputIP_A_dst, Protocol_A, CustomInputIP_B_src, CustomInputIP_B_dst, Protocol_B, Notification_Correlation_ID, Analytics_ID, Target_Period);
	window.location.href = url;			
	
}

